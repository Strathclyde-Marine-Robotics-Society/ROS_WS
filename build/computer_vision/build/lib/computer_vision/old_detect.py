#------------------------------
#This code is for the old two-stage model
#I'll keep it here in case we decide to use it again
#------------------------------
import cv2
import numpy as np

import rclpy
from rclpy.node import Node
from extra_interfaces.msg import Ready
from extra_interfaces.msg import Photo
from extra_interfaces.msg import Detection

from ultralytics import YOLO

import torch
import torch.nn as nn
import torchvision.transforms as transforms

class SimpleCNN(nn.Module):
    def __init__(self, num_classes):
        super(SimpleCNN, self).__init__()
        self.conv1 = nn.Conv2d(3, 16, kernel_size=3, padding=1)
        self.conv2 = nn.Conv2d(16, 32, kernel_size=3, padding=1)
        self.conv3 = nn.Conv2d(32, 64, kernel_size=3, padding=1)
        self.pool = nn.MaxPool2d(2, 2)
        self.fc1 = nn.Linear(64 * 8 * 8, 128)
        self.fc2 = nn.Linear(128, num_classes)

        self.transform = transforms.Compose([
            transforms.ToPILImage(),
            transforms.Resize((64, 64)),
            transforms.ToTensor(),
            transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])
        ])

    def forward(self, x):
        x = self.pool(torch.relu(self.conv1(x)))
        x = self.pool(torch.relu(self.conv2(x)))
        x = self.pool(torch.relu(self.conv3(x)))
        x = x.view(-1, 64 * 8 * 8)
        x = torch.relu(self.fc1(x))
        x = self.fc2(x)
        return x

    def predict(self, image_array: np.ndarray):
        """
        Predict the class and provide the confidence level of an image given as a NumPy array.

        Args:
            image_array (np.ndarray): Image array loaded with cv2 (BGR format).

        Returns:
            tuple: (Predicted class index, Confidence level)
        """
        # Convert the image from BGR (OpenCV default) to RGB
        image = cv2.cvtColor(image_array, cv2.COLOR_BGR2RGB)
        
        # Apply the transformations and add batch dimension
        image = self.transform(image).unsqueeze(0)
        
        # Make prediction
        with torch.no_grad():
            outputs = self(image)
            probabilities = torch.exp(outputs/3)/torch.exp(outputs/3).sum()  # Convert logits to probabilities
            confidences, predicted_indices = torch.max(probabilities, 1)
        
        return predicted_indices.item(), confidences.item()
        
class BuoyDetect(Node):
    def __init__(self):
        super().__init__('buoy_detect')
    
        self.publisher_ready = self.create_publisher(Ready, 'ready_for_photo', 10)
        
        self.publisher_buoy = self.create_publisher(Detection, 'detection', 10)

        self.subscriber = self.create_subscription(Photo, 'photo', self.detect_callback, 10)
        
        self.yolo_model = YOLO("models/1000ModelNoClass.pt")
        
        self.cnn_model = SimpleCNN(6)
        self.cnn_model.load_state_dict(torch.load('models/simple_cnn.pth'))
        self.cnn_model.eval()
        
        self.categories = {
            0: 'green',
            1: 'red',
            2: 'north',
            3: 'east',
            4: 'south',
            5: 'west'
        }
        self.get_logger().info(f'Set up')
        ready = Ready()
        ready.node = 1
        self.publisher_ready.publish(ready)

    def detect_callback(self, msg):
        #ROS2 slows down with large messages, so we bypass it
        img = cv2.imread("/dev/shm/output.bmp")
        self.get_logger().info(f'Received')
        
        results = self.yolo_model(img, verbose=False)[0].boxes
        for box in results:
            buoy = Detection()
            x1, y1, x2, y2 = map(int, box.xyxy[0].tolist())
            buoy.box = [x1, y1, x2, y2]
            
            cls, _ = self.cnn_model.predict(img[y1:y2, x1:x2])
            buoy.cls = cls
            self.get_logger().info(f'{(x1,y1,self.categories[cls], float(box.conf[0]))}')
            buoy.conf = float(box.conf[0])
            self.publisher_buoy.publish(buoy)
            
            
            self.get_logger().info(f'{(x1,y1,self.categories[cls])}')
        ready = Ready()
        ready.node = 1
        self.publisher_ready.publish(ready)
        
    def estimate_distance(self, bbox, frame_shape):
        x1, y1, x2, y2 = bbox
        FOV = np.radians(110)
        pix_angle = FOV/frame_shape[1]
        angle = pix_angle * (x2 - x1)
        #self.get_logger().info(f' frame_shape: {frame_shape}')
        w_distance = 0.20 / np.arctan(angle/2)
        
        angle2 = pix_angle * (y2 - y1)
        h_distance = 0.30 / np.arctan(angle2/2)
        # self.get_logger().info(f'w_distance: {w_distance}, h_distance: {h_distance}')
        
        distance = np.sqrt(h_distance * w_distance)
        theta = (x1 + x2) / 2 * pix_angle - FOV/2
        map_x = distance * np.cos(theta)
        map_y = -1 * distance * np.sin(theta)
        
        return distance, map_x, map_y

def main(args=None):
    rclpy.init(args=args)
    node = BuoyDetect()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


