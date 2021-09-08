#include<iostream>
#include <std_msgs/String.h>
#include "sample/file_head.hpp"
namespace nm_spc{
 demo_class::demo_class(ros::NodeHandle &any_handy):demo_handle(any_handy){
     my_subscriber = any_handy.subscribe("/fuck",2,&demo_class::your_callback, this);
    //  pclSubscriber_ = nodeHandle_.subscribe("/rslidar_points",1, &SmbHighlevelController::pointcloudCallback, this);
 }
 demo_class::~demo_class(){

 }
 void demo_class::your_callback(const std_msgs::String& msg){
     ROS_INFO_STREAM("Your Callback Works");
 }
}