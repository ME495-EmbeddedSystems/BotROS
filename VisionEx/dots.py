import cv2
from turtle import Turtle, Screen
import numpy as np

img = cv2.imread("circle.png")
img = cv2.resize(img,(100,100))

size = img.shape

t1 = Turtle()
scr = Screen()
scr.colormode(255)

x=-100
y=100
arr = np.asarray(img)
print(arr)
t1.speed(500)

for i in range(size[0]):
    t1.penup()
    t1.setpos(x,y)
    t1.pendown
    for j in range(size[1]):
        t1.dot(5,arr[i][j])
        t1.penup()
        t1.forward(5)
        t1.pendown()
        
    y = y-5
    
scr.exitonclick()
        
