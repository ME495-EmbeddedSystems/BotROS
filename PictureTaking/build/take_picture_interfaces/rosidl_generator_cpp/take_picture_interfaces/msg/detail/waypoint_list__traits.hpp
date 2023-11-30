// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__TRAITS_HPP_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "take_picture_interfaces/msg/detail/waypoint_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "take_picture_interfaces/msg/detail/waypoint__traits.hpp"

namespace take_picture_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointList & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace take_picture_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use take_picture_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const take_picture_interfaces::msg::WaypointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  take_picture_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use take_picture_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const take_picture_interfaces::msg::WaypointList & msg)
{
  return take_picture_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<take_picture_interfaces::msg::WaypointList>()
{
  return "take_picture_interfaces::msg::WaypointList";
}

template<>
inline const char * name<take_picture_interfaces::msg::WaypointList>()
{
  return "take_picture_interfaces/msg/WaypointList";
}

template<>
struct has_fixed_size<take_picture_interfaces::msg::WaypointList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<take_picture_interfaces::msg::WaypointList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<take_picture_interfaces::msg::WaypointList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__TRAITS_HPP_
