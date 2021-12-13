#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block c_caller/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_c_caller_std_msgs_Float64> Pub_c_caller_113;

void slros_node_init(int argc, char** argv);

#endif
