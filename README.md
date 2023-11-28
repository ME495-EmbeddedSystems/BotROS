# BotROS 
Authors (Alphabetical): Nader Ahmed, Demiana Barsoum, Shail Dalal, Fiona Neylon, Courtney Smith

## Overview
The aim of this project was to dot paint an image using the Emika Franka Panda 7 DOF robot arm. The system utilizes computer vision and color detection to identify the location of the brushes and various paint colors on a palette. The robot then plans and excecutes trajectories using a custom MoveIt API. 

## How To Run
1. Connect to the Franka and realsense camera
2. Within the `ssh student@station`, `run ros2 launch franka_moveit_config moveit.launch.py use_rviz:=false robot_ip:=panda0.robot`
3. From the workspace containing our packages, run `ros2 launch listen_apriltags aprilTags.launch.xml` to start the realsense camera, rviz, and the april_tag node
    - Before continuing, make sure there are no warnings within the tf tree in rviz and proceed
*** 4. Lastly, from the folder containing the desired image csv, run `ros2 run mattagascar iliketomoveitmoveit`

## Overall System Architecture and High Level 
Packages:

`frankastein` is a custom Python API for MoveIt. It is used for path planning and executing the planned trajectory. 

`mattagascar` package utilizes this API to interface with the franka and other packages via the `iliketomoveitmoveit` node.

`listen_apriltags` package moderates broadcasts the april tags into the tf tree. This package also publishes the location of the paint brushes.

`listen_apriltags_interfaces` consists of the custom msg to interact with the brush location found via april tag

*** `take_picture` package creates the location of the paint dots from a specific image using a Canny edge detector and OpenCV to descritize the outline.

*** `take_picture_interfaces` contains the custom message type to publish the dot locations.

## Algorithms Used/Lessons Learned/Future Works






