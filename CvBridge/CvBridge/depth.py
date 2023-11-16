import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image as msg_Image
from sensor_msgs.msg import CameraInfo
from cv_bridge import CvBridge, CvBridgeError
import sys
import os
from sensor_msgs.msg import Image
from example_interfaces.srv import Trigger
import numpy as np
import pyrealsense2 as rs2
import cv2
if (not hasattr(rs2, 'intrinsics')):
    import pyrealsense2.pyrealsense2 as rs2

class ImageListener(Node):
    def __init__(self):
        
        super().__init__("imagelistener")
        
        self.camera_rgb_subscriber = self.create_subscription(Image,'/camera/color/image_raw',self.camera_rgb_callback,10)
        self.bridge = CvBridge()
        self.timer = self.create_timer(1/100, self.timer_callback)
        self.last_image = None
        
    def camera_rgb_callback(self,msg): 
        """Callback function for the camera image subscriber."""
        self.last_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8') 
        
    def nothing(self):
        pass
    
    def colordetenction(self,image):
        hsv=cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        # lower_blue = np.array([cv2.getTrackbarPos('LowH_blue','trackbar'),cv2.getTrackbarPos('LowS_blue','trackbar'),cv2.getTrackbarPos('LowV_blue','trackbar')])
        # upper_blue = np.array([cv2.getTrackbarPos('HighH_blue','trackbar'),cv2.getTrackbarPos('HighS_blue','trackbar'),cv2.getTrackbarPos('HighV_blue','trackbar')])

        lower_blue = np.array([94, 80, 2], np.uint8) 
        upper_blue = np.array([120, 255, 255], np.uint8) 
        blue_mask= cv2.inRange(hsv, lower_blue, upper_blue)
        
        # lower_red = np.array([cv2.getTrackbarPos('LowH_red','trackbar'),cv2.getTrackbarPos('LowS_red','trackbar'),cv2.getTrackbarPos('LowV_red','trackbar')])
        # upper_red = np.array([cv2.getTrackbarPos('HighH_red','trackbar'),cv2.getTrackbarPos('HighS_red','trackbar'),cv2.getTrackbarPos('HighV_red','trackbar')])

        lower_red = np.array([136, 87, 111], np.uint8)
        upper_red = np.array([180, 255, 255], np.uint8) 
        red_mask= cv2.inRange(hsv, lower_red, upper_red)
        
        # lower_green = np.array([cv2.getTrackbarPos('LowH_green','trackbar'),cv2.getTrackbarPos('LowS_green','trackbar'),cv2.getTrackbarPos('LowV_green','trackbar')])
        # upper_green = np.array([cv2.getTrackbarPos('HighH_green','trackbar'),cv2.getTrackbarPos('HighS_green','trackbar'),cv2.getTrackbarPos('HighV_green','trackbar')])

        lower_green = np.array([25, 52, 72], np.uint8) 
        upper_green = np.array([102, 255, 255], np.uint8) 
        green_mask= cv2.inRange(hsv, lower_green, upper_green)
        
        kernel_size=(5,5)
        kernelo=cv2.getStructuringElement(cv2.MORPH_ELLIPSE,kernel_size)
        kernel_sizec=(20,20)
        kernelc=cv2.getStructuringElement(cv2.MORPH_ELLIPSE,kernel_sizec)
        img_open=cv2.morphologyEx(blue_mask, cv2.MORPH_OPEN, kernelo)
        img_open1=cv2.morphologyEx(red_mask, cv2.MORPH_OPEN, kernelo)
        img_open2=cv2.morphologyEx(green_mask, cv2.MORPH_OPEN, kernelo)
        img_close_blue=cv2.morphologyEx(img_open, cv2.MORPH_CLOSE, kernelc)
        img_close_red=cv2.morphologyEx(img_open1, cv2.MORPH_CLOSE, kernelc)
        img_close_green=cv2.morphologyEx(img_open2, cv2.MORPH_CLOSE, kernelc)

        
        res_blue= cv2.bitwise_and(image, image, mask=img_close_blue)
        res_red= cv2.bitwise_and(image, image, mask=img_close_red)
        res_green= cv2.bitwise_and(image, image, mask=img_close_green)
        contours, hierarchy=cv2.findContours(img_close_blue, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        #print(len(contours))
        cx_blue=0
        cy_blue=0
        biggest_contour=0
        if len(contours)>0:
            biggest_contour=contours[0]
            for a in range(0,len(contours)):
                if cv2.contourArea(contours[a])>cv2.contourArea(biggest_contour):
                    biggest_contour=contours[a]
        
            M=cv2.moments(biggest_contour)
            cx_blue= int(M['m10']/M['m00'])
            cy_blue= int(M['m01']/M['m00'])

            cv2.circle(image, (cx_blue, cy_blue), 3, (255,255,255), -1)
            cv2.putText(image, 'blue_centroid', (cx_blue-10,cy_blue-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,255,255), 2, cv2.LINE_AA)
        
        contours, hierarchy=cv2.findContours(img_close_red, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        #print(len(contours))
        cx_red=0
        cy_red=0
        biggest_contour=0
        if len(contours)>0:
            biggest_contour=contours[0]
            for a in range(0,len(contours)):
                if cv2.contourArea(contours[a])>cv2.contourArea(biggest_contour):
                    biggest_contour=contours[a]
        
            M=cv2.moments(biggest_contour)
            cx_red= int(M['m10']/M['m00'])
            cy_red= int(M['m01']/M['m00'])

            cv2.circle(image, (cx_red, cy_red), 3, (255,255,255), -1)
            cv2.putText(image, 'red_centroid', (cx_red-10,cy_red-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,255,255), 2, cv2.LINE_AA)
            
        contours, hierarchy=cv2.findContours(img_close_green, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        #print(len(contours))
        cx_green=0
        cy_green=0
        biggest_contour=0
        if len(contours)>0:
            biggest_contour=contours[0]
            for a in range(0,len(contours)):
                if cv2.contourArea(contours[a])>cv2.contourArea(biggest_contour):
                    biggest_contour=contours[a]
        
            M=cv2.moments(biggest_contour)
            cx_green= int(M['m10']/M['m00'])
            cy_green= int(M['m01']/M['m00'])
            
            cv2.circle(image, (cx_green, cy_green), 3, (255,255,255), -1)
            cv2.putText(image, 'green_centroid', (cx_green-10,cy_green-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,255,255), 2, cv2.LINE_AA)
            
        conto=cv2.drawContours(image, contours, -1, (0,255,0), 3)
        
        cv2.namedWindow('trackbar',cv2.WINDOW_NORMAL)
        cv2.createTrackbar('LowH_blue','trackbar',0,179,self.nothing)
        cv2.createTrackbar('HighH_blue','trackbar',0,179,self.nothing)
        cv2.createTrackbar('LowS_blue','trackbar',0,255,self.nothing)
        cv2.createTrackbar('HighS_blue','trackbar',0,255,self.nothing)
        cv2.createTrackbar('LowV_blue','trackbar',0,255,self.nothing)
        cv2.createTrackbar('HighV_blue','trackbar',0,255,self.nothing)
        cv2.createTrackbar('LowH_red','trackbar',0,179,self.nothing)
        cv2.createTrackbar('HighH_red','trackbar',0,179,self.nothing)
        cv2.createTrackbar('LowS_red','trackbar',0,255,self.nothing)
        cv2.createTrackbar('HighS_red','trackbar',0,255,self.nothing)
        cv2.createTrackbar('LowV_red','trackbar',0,255,self.nothing)
        cv2.createTrackbar('HighV_red','trackbar',0,255,self.nothing)

        cv2.createTrackbar('LowH_green','trackbar',0,179,self.nothing)
        cv2.createTrackbar('HighH_green','trackbar',0,179,self.nothing)
        cv2.createTrackbar('LowS_green','trackbar',0,255,self.nothing)
        cv2.createTrackbar('HighS_green','trackbar',0,255,self.nothing)
        cv2.createTrackbar('LowV_green','trackbar',0,255,self.nothing)
        cv2.createTrackbar('HighV_green','trackbar',0,255,self.nothing)
        
        cv2.imshow('Thresh',conto)


        cv2.namedWindow('BLUE', cv2.WINDOW_NORMAL)
        cv2.imshow('BLUE',img_close_blue)

        cv2.namedWindow('red', cv2.WINDOW_NORMAL)
        cv2.imshow('red',img_close_red)

        cv2.namedWindow('green', cv2.WINDOW_NORMAL)
        cv2.imshow('green',img_close_green)
        cv2.waitKey(1)
        self.get_logger().info(f"finish? {cx_blue, cx_green, cx_red}")
    
    def timer_callback(self):
        if self.last_image is not None:
            self.colordetenction(self.last_image)
        else:
            self.get_logger().info("Waiting")
            
    



# def main():
#     depth_image_topic = '/camera/depth/image_rect_raw'
#     depth_info_topic = '/camera/depth/camera_info'

#     print ()
#     print ('show_center_depth.py')
#     print ('--------------------')
#     print ('App to demontrate the usage of the /camera/depth topics.')
#     print ()
#     print ('Application subscribes to %s and %s topics.' % (depth_image_topic, depth_info_topic))
#     print ('Application then calculates and print the range to the closest object.')
#     print ('If intrinsics data is available, it also prints the 3D location of the object')
#     print ()
    
#     rclpy.init(args=sys.argv)
#     listener = ImageListener(depth_image_topic, depth_info_topic)
#     rclpy.spin(listener)
#     listener.destroy_node()
#     rclpy.shutdown()    

# # if __name__ == '__main__':
# #     rclpy.init(args=sys.argv)
# #     main()

def main(args=None):
    rclpy.init(args=args)
    node = ImageListener()
    rclpy.spin(node)
    rclpy.shutdown()
