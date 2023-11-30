// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_
#define TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace take_picture_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::take_picture_interfaces::srv::GetWaypoints_Request>()
{
  return ::take_picture_interfaces::srv::GetWaypoints_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace take_picture_interfaces


namespace take_picture_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWaypoints_Response_waypoints
{
public:
  Init_GetWaypoints_Response_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::take_picture_interfaces::srv::GetWaypoints_Response waypoints(::take_picture_interfaces::srv::GetWaypoints_Response::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::take_picture_interfaces::srv::GetWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::take_picture_interfaces::srv::GetWaypoints_Response>()
{
  return take_picture_interfaces::srv::builder::Init_GetWaypoints_Response_waypoints();
}

}  // namespace take_picture_interfaces


namespace take_picture_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetWaypoints_Event_response
{
public:
  explicit Init_GetWaypoints_Event_response(::take_picture_interfaces::srv::GetWaypoints_Event & msg)
  : msg_(msg)
  {}
  ::take_picture_interfaces::srv::GetWaypoints_Event response(::take_picture_interfaces::srv::GetWaypoints_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::take_picture_interfaces::srv::GetWaypoints_Event msg_;
};

class Init_GetWaypoints_Event_request
{
public:
  explicit Init_GetWaypoints_Event_request(::take_picture_interfaces::srv::GetWaypoints_Event & msg)
  : msg_(msg)
  {}
  Init_GetWaypoints_Event_response request(::take_picture_interfaces::srv::GetWaypoints_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetWaypoints_Event_response(msg_);
  }

private:
  ::take_picture_interfaces::srv::GetWaypoints_Event msg_;
};

class Init_GetWaypoints_Event_info
{
public:
  Init_GetWaypoints_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWaypoints_Event_request info(::take_picture_interfaces::srv::GetWaypoints_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetWaypoints_Event_request(msg_);
  }

private:
  ::take_picture_interfaces::srv::GetWaypoints_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::take_picture_interfaces::srv::GetWaypoints_Event>()
{
  return take_picture_interfaces::srv::builder::Init_GetWaypoints_Event_info();
}

}  // namespace take_picture_interfaces

#endif  // TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_
