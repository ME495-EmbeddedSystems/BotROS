// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from take_picture_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "take_picture_interfaces/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace take_picture_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const take_picture_interfaces::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  take_picture_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use take_picture_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const take_picture_interfaces::msg::Waypoint & msg)
{
  return take_picture_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<take_picture_interfaces::msg::Waypoint>()
{
  return "take_picture_interfaces::msg::Waypoint";
}

template<>
inline const char * name<take_picture_interfaces::msg::Waypoint>()
{
  return "take_picture_interfaces/msg/Waypoint";
}

template<>
struct has_fixed_size<take_picture_interfaces::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<take_picture_interfaces::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<take_picture_interfaces::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
