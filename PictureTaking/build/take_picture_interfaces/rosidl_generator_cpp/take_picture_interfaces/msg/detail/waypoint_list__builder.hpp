// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__BUILDER_HPP_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "take_picture_interfaces/msg/detail/waypoint_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace take_picture_interfaces
{

namespace msg
{

namespace builder
{

class Init_WaypointList_waypoints
{
public:
  Init_WaypointList_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::take_picture_interfaces::msg::WaypointList waypoints(::take_picture_interfaces::msg::WaypointList::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::take_picture_interfaces::msg::WaypointList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::take_picture_interfaces::msg::WaypointList>()
{
  return take_picture_interfaces::msg::builder::Init_WaypointList_waypoints();
}

}  // namespace take_picture_interfaces

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__BUILDER_HPP_
