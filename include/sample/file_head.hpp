#pragma once
#include<ros/ros.h>
#include<iostream>
#include<string.h>
#include <std_msgs/String.h>
namespace nm_spc{
    class demo_class{
        public:
            demo_class(ros::NodeHandle& any_handy);
            virtual ~demo_class();
        private:
            ros::NodeHandle demo_handle;
            std::string s;
            ros::Subscriber my_subscriber;

            void your_callback(const std_msgs::String& msg);
    };
}