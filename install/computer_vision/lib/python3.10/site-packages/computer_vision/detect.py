import cv2
import numpy as np

import rclpy
from rclpy.node import Node
from extra_interfaces.msg import Ready
from extra_interfaces.msg import Photo
from extra_interfaces.msg import Detection

from ultralytics import YOLO
    
class BuoyDetect(Node):
    def __init__(self):
        super().__init__('buoy_detect')
    
        self.publisher_ready = self.create_publisher(Ready, 'ready_for_photo', 10)
        
        self.publisher_buoy = self.create_publisher(Detection, 'detection', 10)

        self.subscriber = self.create_subscription(Photo, 'photo', self.detect_callback, 10)
        
        self.yolo_model = YOLO("models/640ModelNavier_FP16.engine")
        
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
            buoy.cls = int(box.cls[0])
            #self.get_logger().info(f'{(x1,y1,self.categories[buoy.cls], float(box.conf[0]))}')
            buoy.conf = float(box.conf[0])
            if buoy.conf > 0.65:
                self.publisher_buoy.publish(buoy)
            
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


