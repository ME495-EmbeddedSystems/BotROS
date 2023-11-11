#import opencv2 python
import cv2
import numpy as np
import matplotlib.pyplot as plt


#this function will take a rectified image from the realsense (with the background objects > some depth removed)
#want to create a function which generates an edge map for a given image and then turns the edges into discretized dots

#function to generate edge map
def edge_map(image):
    #read in image file
    img = cv2.imread(image,0)

    #downscale image by 70%
    img = cv2.resize(img, (0,0), fx=0.7, fy=0.7)

    #generate edge map
    edges = cv2.Canny(img,100,200)

    #make the edges thicker, get rid of noise (do dilations and erosions)
    kernel = np.ones((4,4),np.uint8)
    edges = cv2.dilate(edges,kernel,iterations = 2)

    #invert the image
    edges = cv2.bitwise_not(edges)

    #create black image to draw points on
    canvas = np.zeros_like(img)

    #find contours of edges
    contours, hierarchy = cv2.findContours(edges, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

    #iterate over contours and draw circles at each point
    for i in range(len(contours)):
        #reshape contour into list of points
        points = []
        for j in range(len(contours[i])):
            x, y = contours[i][j][0]
            points.append((x, y))

        step = 5 #how many points to skip
        outline = points[0:len(points):step] 

        #draw circles at each point in outline
        marker_size = 10 # robots marker size
        for point in outline:
            x, y = point
            cv2.circle(canvas, (x, y), marker_size, (255, 0, 0), -1)

    #show images side by side
    fig, axs = plt.subplots(1, 3, figsize=(15, 5))
    axs[0].imshow(cv2.resize(img, (0,0), fx=1/0.7, fy=1/0.7),cmap = 'gray')
    axs[0].set_title('Original Image')
    axs[1].imshow(edges,cmap = 'gray')
    axs[1].set_title('Edge Map')
    axs[2].imshow(cv2.bitwise_not(canvas),cmap = 'gray')
    axs[2].set_title('Edge Points')
    plt.show()
    print("number of robot waypoints:", len(outline))
    return edges, outline

def simple_circle(): 
    x_range = (0, 0.5)
    y_range = (-0.25, 0.25)

    points = []
    for i in range(0, 360, 45): 
        angle = i * np.pi / 180 #cvt to radians 
        x = x_range[0] + (x_range[1] - x_range[0]) * (0.5 + 0.5 * np.cos(angle))
        y = y_range[0] + (y_range[1] - y_range[0]) * (0.5 + 0.5 * np.sin(angle))
        points.append((x, y))

    # plot the circle
    fig, ax = plt.subplots()
    ax.set_aspect('equal')
    ax.scatter(*zip(*points))
    plt.show()
    return points

def save_to_csv(waypoints_list, filename):

    np.savetxt(filename, waypoints_list, delimiter=",")

def main(): 
    edges, picture_points = edge_map('nader_pic.jpg') 

    circle_points = simple_circle()

    save_to_csv(circle_points, "circle_points.csv")
    

if __name__ == "__main__": 
    main()