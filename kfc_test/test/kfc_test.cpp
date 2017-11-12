#include <gtest/gtest.h>
#include <ros/ros.h>
#include <climits>
#include <memory>	
#include <std_msgs/Float64.h>
#include <std_msgs/String.h>
#include <ros/console.h>
//#include "geometry_msgs/Twist.h"
//#include "turtlesim/Pose.h"
//#include "nav_msgs/Odometry.h"
//#include <sstream>	


class CallbackHandler
{
public:
  CallbackHandler()
  : result(0)
  { }
	
  void callback(const std_msgs::Float64::ConstPtr& msg)
  {   
	result = msg->data;
  }

  double result;
};

TEST(shooldPass, speedTest) {
	ros::NodeHandle nh;
	ros::Rate loop_rate(1);

	// Handles our callback for our subscriber:
	CallbackHandler mCallbackHandler1, mCallbackHandler2, mCallbackHandler3, mCallbackHandler4;

	// Define our publishers/subscribers:
	ros::Subscriber speedTurn_sub = nh.subscribe("/speedTurn", 100, &CallbackHandler::callback, &mCallbackHandler1);
	ros::Subscriber speedThirtyPlus_sub = nh.subscribe("/speedThirtyPlus", 100, &CallbackHandler::callback, &mCallbackHandler2);
	ros::Subscriber speedTwentyToThirty_sub = nh.subscribe("/speedTwentyToThirty", 100, &CallbackHandler::callback, &mCallbackHandler3);
	ros::Subscriber speedTenToTwenty_sub = nh.subscribe("/speedTenToTwenty", 100, &CallbackHandler::callback, &mCallbackHandler4);

	loop_rate.sleep();	// Give ROS time to comnfigure topics.
	ros::spinOnce();

	// Make sure publisher and subcriber get connected.
    while(speedTurn_sub.getNumPublishers() == 0) {
      loop_rate.sleep();
    }

	// B.1 speedTurn <= 1
	EXPECT_LE(mCallbackHandler1.result,1);
	// B.2 speedThirtyPlus <= 4
	EXPECT_LE(mCallbackHandler2.result,4); 
	// B.3 speedTwentyToThirty <= 2
	EXPECT_LE(mCallbackHandler3.result,2); 
	// B.4 speedTenToTwenty <= 1
	EXPECT_LE(mCallbackHandler4.result,1); 

}

TEST(shooldPass, distanceTest) {
	ros::NodeHandle nh;
	ros::Rate loop_rate(1);

	// Handles our callback for our subscriber:
	CallbackHandler mCallbackHandler1, mCallbackHandler2, mCallbackHandler3;

	// Define our publishers/subscribers:
	ros::Subscriber absSafeDist_sub = nh.subscribe("/absSafeDist", 100, &CallbackHandler::callback, &mCallbackHandler1);
	ros::Subscriber quiteSafeDist_sub = nh.subscribe("/quiteSafeDist", 100, &CallbackHandler::callback, &mCallbackHandler2);
	ros::Subscriber turnDist_sub = nh.subscribe("/turnDist", 100, &CallbackHandler::callback, &mCallbackHandler3);

	loop_rate.sleep();	// Give ROS time to comnfigure topics.
	ros::spinOnce();

	// Make sure publisher and subcriber get connected.
    while(absSafeDist_sub.getNumPublishers() == 0) {
      loop_rate.sleep();
    }

	// B.5 absSafeDist == 30
	EXPECT_EQ(mCallbackHandler1.result,30);
	// B.6 quiteSafeDist == 20
	EXPECT_EQ(mCallbackHandler2.result,20); 
	// B.7 turnDist == 10
	EXPECT_EQ(mCallbackHandler3.result,10); 

}

TEST(shooldPass, directionTest) {
	ros::NodeHandle nh;
	ros::Rate loop_rate(1);

	// Handles our callback for our subscriber:
	CallbackHandler mCallbackHandler1, mCallbackHandler2, mCallbackHandler3, 
					mCallbackHandler4, mCallbackHandler5, mCallbackHandler6,
					mCallbackHandler7, mCallbackHandler8, mCallbackHandler9,
					mCallbackHandler10, mCallbackHandler11;

	// Define our publishers/subscribers:
	ros::Subscriber forceTurnRightRange_sub = nh.subscribe("/forceTurnRightRange", 100, &CallbackHandler::callback, &mCallbackHandler1);
	ros::Subscriber forceTurnLeftRange_sub = nh.subscribe("/forceTurnLeftRange", 100, &CallbackHandler::callback, &mCallbackHandler2);
	ros::Subscriber forceTurnRightCounter_sub = nh.subscribe("/forceTurnRightCounter", 100, &CallbackHandler::callback, &mCallbackHandler3);
	ros::Subscriber forceTurnLeftCounter_sub = nh.subscribe("/forceTurnLeftCounter", 100, &CallbackHandler::callback, &mCallbackHandler4);
	ros::Subscriber turnAngleSafe_sub = nh.subscribe("/turnAngleSafe", 100, &CallbackHandler::callback, &mCallbackHandler5);
	ros::Subscriber turnLeftAngleZeroToTen_sub = nh.subscribe("/turnLeftAngleZeroToTen", 100, &CallbackHandler::callback, &mCallbackHandler6);
	ros::Subscriber turnRightAngleZeroToTen_sub = nh.subscribe("/turnRightAngleZeroToTen", 100, &CallbackHandler::callback, &mCallbackHandler7);
	ros::Subscriber exitTurningLeftAngle_sub = nh.subscribe("/exitTurningLeftAngle", 100, &CallbackHandler::callback, &mCallbackHandler8);
	ros::Subscriber exitTurningRightAngle_sub = nh.subscribe("/exitTurningRightAngle", 100, &CallbackHandler::callback, &mCallbackHandler9);
	ros::Subscriber turnDist_sub = nh.subscribe("/turnDist", 100, &CallbackHandler::callback, &mCallbackHandler10);
	ros::Subscriber stopDistance_sub = nh.subscribe("/stopDistance", 100, &CallbackHandler::callback, &mCallbackHandler11);

	loop_rate.sleep();	// Give ROS time to comnfigure topics.
	ros::spinOnce();

	// Make sure publisher and subcriber get connected.
    while(forceTurnRightRange_sub.getNumPublishers() == 0) {
      loop_rate.sleep();
    }

	// A.1 forceTurnRightRange == 79.9
	EXPECT_EQ(mCallbackHandler1.result,79.9);
	// A.2 forceTurnLeftRange == 79.9
	EXPECT_EQ(mCallbackHandler2.result,79.9); 
	// A.3 forceTurnRightCounter >= 40 (50)
	EXPECT_GE(mCallbackHandler3.result,40); 
	// A.4 forceTurnLeftCounter >= 40 (50)
	EXPECT_GE(mCallbackHandler4.result,40);
	// A.5 exitTurningLeftAngle == 0.2
	EXPECT_EQ(mCallbackHandler8.result,0.2); 
	// A.6 exitTurningRightAngle == -0.2
	EXPECT_EQ(mCallbackHandler9.result,-0.2); 
	// A.7 stopDistance == 55
	EXPECT_EQ(mCallbackHandler11.result,55);
	// B.8 turnAngleSafe == 0
	EXPECT_EQ(mCallbackHandler5.result,0); 
	// B.9 turnLeftAngleZeroToTen >= 3 (10)
	EXPECT_GE(mCallbackHandler6.result,3); 
	// B.10  turnRightAngleZeroToTen <= -3 (10)
	EXPECT_LE(mCallbackHandler7.result,-3); 
	// B.11 turnDist == 10
	EXPECT_EQ(mCallbackHandler10.result,10);  

}





int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	ros::init(argc, argv, "kfc_test");

	return RUN_ALL_TESTS();
}
