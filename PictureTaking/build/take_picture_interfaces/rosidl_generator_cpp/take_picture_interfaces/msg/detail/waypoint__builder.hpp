// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from take_picture_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "take_picture_interfaces/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace take_picture_interfaces
{

namespace msg
{

namespace builder
{

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::take_picture_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::take_picture_interfaces::msg::Waypoint y(::take_picture_interfaces::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::take_picture_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  Init_Waypoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_y x(::take_picture_interfaces::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::take_picture_interfaces::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::take_picture_interfaces::msg::Waypoint>()
{
  return take_picture_interfaces::msg::builder::Init_Waypoint_x();
}

}  // namespace take_picture_interfaces

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
