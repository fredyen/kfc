# About
This is **Final Release** for KFC Automous Car project.
Video presentation url: ...

# catkin workspace and build
In order to use the catvehicle ROS package, you should work within a catkin workspace. If you do not already have one:
```
cd ~
mkdir -p catvehicle_ws/src
cd catvehicle_ws/src
catkin_init_workspace
cd ..
catkin_make
```
At this point, you can clone this Final Release to your src directory. Make sure you are in the src directory before cloning. You can follow the steps below:
```
cd src
git clone https://git.engr.arizona.edu/ece473-573-2017S/kfc.git
cd..
catkin_make
```
# How to run Final Release
Notice there is an final.launch file in catvehicle_ws/src/kfc/catvehicle/launch directory. You need to run this launch file to start the Final Release. Here are are the commands:
```
cd ~/catvehicle_ws
source devel/setup.bash
roslaunch catvehicle final.launch
```
At this point, the Alpha Release is running, if you want to start the gui to watch how the car is working, open a new terminal and do the following commands:
```
cd ~/catvehicle_ws
source devel/setup.bash
gzclient
```
And if you want to see how the car detect objects and produce objects' location, open a new termianl and do the following commands:
```
cd cd ~/catvehicle_ws/src
source devel/setup.bash
rosrun rviz rviz
```

# How to test Final Release
Make sure you have already stopped all running nodes before running this test.
```
cd ~/catvehicle
source devel/setup.bash
catkin_make tests
rostest kfc_test test_node_launch.test
```
You should see if all nodes pass tests.

# Expected Result for this release
In the final release, our car can:
* Control the cars speed depend on the the distance between the car and the nearest object it detects;
* Choose the direcition that has fewer objects to turn to avoid objects in front of it;
* Detect ojbects and do simple classification;
* Recogonize the exit and eccape through this exit.

# Author
* Frederick Yen (fyen@email.arizona.edu)
* Keeley Criswell (KCRISWELL@email.arizona.edu)
* Ju Pan (pjokk722@email.arizona.edu) 
