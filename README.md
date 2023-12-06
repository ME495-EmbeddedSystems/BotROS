# BotROS 
Authors (Alphabetical): Nader Ahmed, Demiana Barsoum, Shail Dalal, Fiona Neylon, Courtney Smith

<image src="https://github.com/ME495-EmbeddedSystems/final-project-Group5/assets/144190404/a1c4235a-0d14-4e28-bbcc-6728754631ef" title="BotROS portrait"/>

<video src="https://github.com/ME495-EmbeddedSystems/final-project-Group5/assets/144190404/b2075725-eae9-4ce6-a66d-7d366f441078" title="BotROS at work" >
</video>

## Overview
The aim of this project was to paint dot an image using the Emika Franka Panda 7 DOF robotic arm. The system utilizes computer vision and color detection to identify the location of the brushes and various paint colors on a palette. The robot then plans and excecutes trajectories using a custom MoveIt API. 

## How To Run
1. Connect to the Franka and realsense camera
2. Access the robot arm through the terminal: ssh into `ssh student@station`.
3. On `station`, run `run ros2 launch franka_moveit_config moveit.launch.py use_rviz:=false robot_ip:=panda0.robot` to start the controllers and moveit.
4. On laptop, `cd` into workspace containing our packages.

% can we have nader write about to how to load an image and create the json file for it?
% need to mention the layout of our workspace by looking at an image? or do we not need to go that much in detail?

5. In `mattagascar\mattagascar\iliketomoveitmoveit.py`, edit `file_name` to match and load the saved path of the `.json` file of desired image. 
6. On laptop from the workspace containing our packages, run `ros2 launch listen_apriltags aprilTags.launch.xml` to start the realsense camera, rviz, and the april_tag node.
    - Before continuing, make sure there are no warnings within the tf tree in rviz and proceed
7. Also in the workspace containing the packages, run `ros2 run CvBridge depth` to start the color detection of the paint locations.  
8. Lastly, from the folder containing the desired image json, run `ros2 run mattagascar iliketomoveitmoveit`
9. Finally, sit back and enjoy the robot painting :)

## Overall System Architecture and High Level 
### Packages:

`frankastein` is a custom Python API for MoveIt. It is used for path planning and executing the planned trajectory. It uses predefined functions from `populate_msgs`, which are actions, services, and messages for MoveIt.

`mattagascar` package utilizes the frankastein API to interface with the franka and other packages via the `iliketomoveitmoveit` node.

`listen_apriltags` package broadcasts the april tags into the tf tree. This package also publishes the location of the paint brushes.

`listen_apriltags_interfaces` consists of the custom msg, `Loc`, to interact with the brush locations found via april tags.

`take_picture` package creates the location of the paint dots from a specific image using a Canny edge detector and OpenCV to descritize the outline.

`take_picture_interfaces` contains the custom message type to publish the dot locations.

`CvBridge` package identifies the location of each paint color. This node listens to the tf tree to find the palette location. After recieving palette location, it uses color detection within a specified radius to narrow the field of detection for each color.

### Nodes

`iliketomoveitmoveit` - this node contains all the motions required for the franka to move to dot paint a specified image using cartesian path planning. It breaks the points loaded by from the `json` file to individual waypoints for each point, which includes a standoff position. The robot goes to standoff, dots, and then returns to standoff. This node also handles when the robot goes to fetch paint after a specificed amount of dots and when to switch paintbrushes and colors, and when to return brushes back once painting is complete. 

`listener` - The listener node establishes the transform between the camera and the robot through the apriltag locations. It publishes the locations of the paint brushes and paint palette to the `/paint_loc` topic via the custom message type `listen_apriltags_interfaces/msg/Loc`

`picture_node` - 

`Depth` - The Depth uses Computer vision to find the location of palette and perform a color detection on the paint present inside it. The file is configured for red, blue, green, orange, purple and yellow color. The depth node publishes a transform between the robot's base link and the paint location. 

### Custom Messages

`listen_apriltags_interfaces/msg/Loc` - contains the location of the paint brushes and paint palette as a float array of x,y, and z positions

`take_picture_interfaces/msg/Waypoint` -

`take_picture_interfaces/msg/WaypointList` -


### Algorithms Used

`canny edge detection` - 

### Futurue Work
- use cv for the robot to detect when it needs to refill on paint
- increase the workspace of the robot by experimenting with different psoitions of the canvas
- incorporate dynamic location of the canvas
- learn how to increase the speed without compromising quality and detecting collisions/odd behaviors





