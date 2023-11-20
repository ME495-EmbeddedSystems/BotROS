# First import the library
import pyrealsense2 as rs
# Import Numpy for easy array manipulation
import numpy as np
# Import OpenCV for easy image rendering
import cv2

# Create a pipeline
pipeline = rs.pipeline()

# Create a config and configure the pipeline to stream
#  different resolutions of color and depth streams
config = rs.config()

# Get device product line for setting a supporting resolution
pipeline_wrapper = rs.pipeline_wrapper(pipeline)
pipeline_profile = config.resolve(pipeline_wrapper)
device = pipeline_profile.get_device()
device_product_line = str(device.get_info(rs.camera_info.product_line))

found_rgb = False
for s in device.sensors:
    if s.get_info(rs.camera_info.name) == 'RGB Camera':
        found_rgb = True
        break
if not found_rgb:
    print("The demo requires Depth camera with Color sensor")
    exit(0)

config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)

if device_product_line == 'L500':
    config.enable_stream(rs.stream.color, 960, 540, rs.format.bgr8, 30)
else:
    config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

# Start streaming
profile = pipeline.start(config)

# Getting the depth sensor's depth scale (see rs-align example for explanation)
depth_sensor = profile.get_device().first_depth_sensor()
depth_scale = depth_sensor.get_depth_scale()
print("Depth Scale is: " , depth_scale)

# We will be removing the background of objects more than
#  clipping_distance_in_meters meters away
clipping_distance_in_meters = 5 #1 meter
clipping_distance = clipping_distance_in_meters / depth_scale

# Create an align object
# rs.align allows us to perform alignment of depth frames to others frames
# The "align_to" is the stream type to which we plan to align depth frames.
align_to = rs.stream.color
align = rs.align(align_to)

def nothing(x):
    pass

cv2.namedWindow('trackbar',cv2.WINDOW_NORMAL)
cv2.createTrackbar('LowH_blue','trackbar',0,179,nothing)
cv2.createTrackbar('HighH_blue','trackbar',0,179,nothing)
cv2.createTrackbar('LowS_blue','trackbar',0,255,nothing)
cv2.createTrackbar('HighS_blue','trackbar',0,255,nothing)
cv2.createTrackbar('LowV_blue','trackbar',0,255,nothing)
cv2.createTrackbar('HighV_blue','trackbar',0,255,nothing)

cv2.createTrackbar('LowH_red','trackbar',0,179,nothing)
cv2.createTrackbar('HighH_red','trackbar',0,179,nothing)
cv2.createTrackbar('LowS_red','trackbar',0,255,nothing)
cv2.createTrackbar('HighS_red','trackbar',0,255,nothing)
cv2.createTrackbar('LowV_red','trackbar',0,255,nothing)
cv2.createTrackbar('HighV_red','trackbar',0,255,nothing)

cv2.createTrackbar('LowH_green','trackbar',0,179,nothing)
cv2.createTrackbar('HighH_green','trackbar',0,179,nothing)
cv2.createTrackbar('LowS_green','trackbar',0,255,nothing)
cv2.createTrackbar('HighS_green','trackbar',0,255,nothing)
cv2.createTrackbar('LowV_green','trackbar',0,255,nothing)
cv2.createTrackbar('HighV_green','trackbar',0,255,nothing)


# Streaming loop
try:
    while True:
        # Get frameset of color and depth
        frames = pipeline.wait_for_frames()
        # frames.get_depth_frame() is a 640x360 depth image

        # Align the depth frame to color frame
        aligned_frames = align.process(frames)

        # Get aligned frames
        aligned_depth_frame = aligned_frames.get_depth_frame() # aligned_depth_frame is a 640x480 depth image
        color_frame = aligned_frames.get_color_frame()
        color_frame1= aligned_frames.get_color_frame()
        #print(color_frame1)
        
        # Validate that both frames are valid
        if not aligned_depth_frame or not color_frame:
            continue

        depth_image = np.asanyarray(aligned_depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())
        color_image1 = np.asanyarray(color_frame1.get_data())
        
        mask = np.zeros(color_image1.shape[:2], dtype="uint8")
        cv2.rectangle(mask, (0, 90), (290, 450), 255, -1)
        
        masked = cv2.bitwise_and(color_image1, color_image1, mask=mask)
        
        hsv=cv2.cvtColor(masked, cv2.COLOR_BGR2HSV)

        #print(hsv)
        lower_blue = np.array([cv2.getTrackbarPos('LowH_blue','trackbar'),cv2.getTrackbarPos('LowS_blue','trackbar'),cv2.getTrackbarPos('LowV_blue','trackbar')])
        upper_blue = np.array([cv2.getTrackbarPos('HighH_blue','trackbar'),cv2.getTrackbarPos('HighS_blue','trackbar'),cv2.getTrackbarPos('HighV_blue','trackbar')])

        blue_mask= cv2.inRange(hsv, lower_blue, upper_blue)
        
        lower_red = np.array([cv2.getTrackbarPos('LowH_red','trackbar'),cv2.getTrackbarPos('LowS_red','trackbar'),cv2.getTrackbarPos('LowV_red','trackbar')])
        upper_red = np.array([cv2.getTrackbarPos('HighH_red','trackbar'),cv2.getTrackbarPos('HighS_red','trackbar'),cv2.getTrackbarPos('HighV_red','trackbar')])

        red_mask= cv2.inRange(hsv, lower_red, upper_red)
        
        lower_green = np.array([cv2.getTrackbarPos('LowH_green','trackbar'),cv2.getTrackbarPos('LowS_green','trackbar'),cv2.getTrackbarPos('LowV_green','trackbar')])
        upper_green = np.array([cv2.getTrackbarPos('HighH_green','trackbar'),cv2.getTrackbarPos('HighS_green','trackbar'),cv2.getTrackbarPos('HighV_green','trackbar')])

        green_mask= cv2.inRange(hsv, lower_green, upper_green)
        
        #th= cv2.adaptiveThreshold(color_image1, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 11,2)
        #kernel=np.ones((3,3), np.uint8)
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

        
        res_blue= cv2.bitwise_and(masked, masked, mask=img_close_blue)
        res_red= cv2.bitwise_and(masked, masked, mask=img_close_red)
        res_green= cv2.bitwise_and(masked, masked, mask=img_close_green)
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

            cv2.circle(masked, (cx_blue, cy_blue), 3, (255,255,255), -1)
            cv2.putText(masked, 'blue_centroid', (cx_blue-10,cy_blue-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,255,255), 2, cv2.LINE_AA)
        
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

            cv2.circle(masked, (cx_red, cy_red), 3, (255,255,255), -1)
            cv2.putText(masked, 'red_centroid', (cx_red-10,cy_red-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,255,255), 2, cv2.LINE_AA)
            
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

            cv2.circle(masked, (cx_green, cy_green), 3, (255,255,255), -1)
            cv2.putText(masked, 'green_centroid', (cx_green-10,cy_green-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,255,255), 2, cv2.LINE_AA)
            
        conto=cv2.drawContours(masked, contours, -1, (0,255,0), 3)
        # depth=aligned_depth_frame.get_distance(cx,cy)
        # cfg=profile.get_stream(rs.stream.color)
        # intr=cfg.as_video_stream_profile().get_intrinsics()
        # coordinates= rs.rs2_deproject_pixel_to_point(intr, [cx,cy], depth)

        



        # Remove background - Set pixels further than clipping_distance to grey
        grey_color = 153
        depth_image_3d = np.dstack((depth_image,depth_image,depth_image)) #depth image is 1 channel, color is 3 channels
        bg_removed = np.where((depth_image_3d > clipping_distance) | (depth_image_3d <= 0), grey_color, color_image)

        # Render images:
        #   depth align to color on left
        #   depth on right
        depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET)
        images = np.hstack((bg_removed, depth_colormap))

        #cv2.namedWindow('Align Example', cv2.WINDOW_NORMAL)
        #cv2.imshow('Align Example', images)

        #cv2.namedWindow('Align Example1', cv2.WINDOW_NORMAL)
        #cv2.imshow('Align Example1', res)
        
        #cv2.namedWindow('Thresh', cv2.WINDOW_NORMAL)
        cv2.imshow('Thresh',conto)


        cv2.namedWindow('BLUE', cv2.WINDOW_NORMAL)
        cv2.imshow('BLUE',img_close_blue)

        cv2.namedWindow('red', cv2.WINDOW_NORMAL)
        cv2.imshow('red',img_close_red)

        cv2.namedWindow('green', cv2.WINDOW_NORMAL)
        cv2.imshow('green',img_close_green)

        
        key = cv2.waitKey(1)
        
        # Press esc or 'q' to close the image window
        if key & 0xFF == ord('q') or key == 27:
            cv2.destroyAllWindows()
            break
        # if key & 0xFF == ord('z'):
        #     print(coordinates)
        #     f=open("/tmp/data.fifo",'w')
        #     f.write(f"{coordinates[0]},{coordinates[1]},{coordinates[2]}")
        #     f.flush()
        #     f.close()
finally:
    pipeline.stop()
