import cv2
import yaml
import numpy as np

import rclpy
import time
from rclpy.node import Node
from extra_interfaces.msg import Ready
from extra_interfaces.msg import Photo

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        self.cap = cv2.VideoCapture(0)
          
        with open("ost.yaml") as stream:
            self.params = yaml.safe_load(stream)
    
            
        self.max_w = self.params['image_width']
        self.max_h = self.params['image_height']
  
        self.w, self.h = [800, 600] #The actual resolution we'll use
  
  
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.w)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.h)
        self.cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc(*'MJPG'))
  
        self.mtx = np.array(self.params['camera_matrix']['data']).reshape(3,3)
  
        w_scale, h_scale = self.w/self.max_w, self.h/self.max_h
        
        self.mtx[0] *= w_scale
        self.mtx[1] *= h_scale
  
        self.dst = np.array(self.params['distortion_coefficients']['data'])
  
        self.new_mtx, self.roi = cv2.getOptimalNewCameraMatrix(self.mtx, self.dst, (self.w,self.h), 1, (self.w,self.h))
    
        self.publisher_ = self.create_publisher(Photo, 'photo', 1)

        self.subscriber = self.create_subscription(Ready, 'ready_for_photo', self.listener_callback, 10)

        # Variables to track received messages
        self.active = [0,0,0,0,0,0]
        self.ready = [1,1,1,1,1,1]
        self.t = time.time()
        self.check_and_publish()
        
    def __del__(self):
        self.cap.release()

    def listener_callback(self, msg):
        #self.get_logger().info(f'Received: {msg.data}')
        self.active[msg.node] = 1
        self.ready[msg.node] = 1
        self.check_and_publish()

    def check_and_publish(self):
        # Check if both messages have been received
        if sum(self.ready) >= sum(self.active):
            self.get_logger().info(f'{1/(time.time() - self.t)}')
            self.t = time.time()
            ret, frame = self.cap.read()
            img = cv2.undistort(frame, self.mtx, self.dst, None, self.new_mtx)
            x, y, w, h = self.roi
            img = np.ascontiguousarray(img[y:y+h, x:x+w])
            
            #ROS2 slows down with large messages, so we bypass it
            cv2.imwrite("/dev/shm/output.bmp",img)
            #self.get_logger().info(f'{w}, {h}')
            
            self.publisher_.publish(Photo())
            # Reset the received messages
            self.ready = [0,0,0,0,0,0]

def main(args=None):
    rclpy.init(args=args)
    node = CameraPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


