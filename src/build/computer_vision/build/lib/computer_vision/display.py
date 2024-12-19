import cv2
import numpy as np

import rclpy
from rclpy.node import Node
from extra_interfaces.msg import Ready
from extra_interfaces.msg import Photo
from extra_interfaces.msg import Detection

class CameraSubscriber(Node):
    def __init__(self):
        super().__init__('camera_subscriber')
    
        self.publisher_ = self.create_publisher(Ready, 'ready_for_photo', 10)

        self.subscriber = self.create_subscription(Photo, 'photo', self.display_callback, 10)
        
        self.subscriber = self.create_subscription(Detection, 'detection', self.detection_callback, 10)

        self.frame = 0
        self.colours = {
            0: (0, 255, 0),    # Green
            1: (0, 0, 255),    # Red
            2: (255, 255, 0),  # Cyan (for north)
            3: (255, 0, 255),  # Magenta (for east)
            4: (0, 255, 255),  # Yellow (for south)
            5: (255, 0, 0)     # Blue (for west)
        }
        
    def display_callback(self, msg):
        #ROS2 slows down with large messages, so we bypass it
        self.frame = cv2.imread("/dev/shm/output.bmp")
        
        #cv2.imshow('image window', self.frame)
        #cv2.waitKey(1)
        #Don't make the camera wait for the GUI
        
        #ready = Ready()
        #ready.node = 0
        #self.publisher_.publish(ready)
        
    def detection_callback(self,msg):
        x1, y1, x2, y2 = msg.box
        cls = msg.cls
        conf = float(msg.conf)
        cv2.rectangle(self.frame, (x1, y1), (x2, y2), self.colours[cls], 4)
        
        label_text = f'{cls}: {conf:.2f}'
        cv2.putText(self.frame, label_text, (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 1.0, self.colours[cls], 3)  # 3 pixels thick text
                
        cv2.imshow('image window', self.frame)
        cv2.waitKey(1)
        
def main(args=None):
    rclpy.init(args=args)
    waiting_publisher = CameraSubscriber()
    rclpy.spin(waiting_publisher)
    waiting_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


