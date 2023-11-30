// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
#define TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace take_picture_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use take_picture_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const take_picture_interfaces::srv::GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  take_picture_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use take_picture_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const take_picture_interfaces::srv::GetWaypoints_Request & msg)
{
  return take_picture_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<take_picture_interfaces::srv::GetWaypoints_Request>()
{
  return "take_picture_interfaces::srv::GetWaypoints_Request";
}

template<>
inline const char * name<take_picture_interfaces::srv::GetWaypoints_Request>()
{
  return "take_picture_interfaces/srv/GetWaypoints_Request";
}

template<>
struct has_fixed_size<take_picture_interfaces::srv::GetWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<take_picture_interfaces::srv::GetWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoints'
#include "take_picture_interfaces/msg/detail/waypoint_list__traits.hpp"

namespace take_picture_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Response & msg,
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
  const GetWaypoints_Response & msg,
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

inline std::string to_yaml(const GetWaypoints_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use take_picture_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const take_picture_interfaces::srv::GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  take_picture_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use take_picture_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const take_picture_interfaces::srv::GetWaypoints_Response & msg)
{
  return take_picture_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<take_picture_interfaces::srv::GetWaypoints_Response>()
{
  return "take_picture_interfaces::srv::GetWaypoints_Response";
}

template<>
inline const char * name<take_picture_interfaces::srv::GetWaypoints_Response>()
{
  return "take_picture_interfaces/srv/GetWaypoints_Response";
}

template<>
struct has_fixed_size<take_picture_interfaces::srv::GetWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<take_picture_interfaces::srv::GetWaypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace take_picture_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const GetWaypoints_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use take_picture_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const take_picture_interfaces::srv::GetWaypoints_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  take_picture_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use take_picture_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const take_picture_interfaces::srv::GetWaypoints_Event & msg)
{
  return take_picture_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<take_picture_interfaces::srv::GetWaypoints_Event>()
{
  return "take_picture_interfaces::srv::GetWaypoints_Event";
}

template<>
inline const char * name<take_picture_interfaces::srv::GetWaypoints_Event>()
{
  return "take_picture_interfaces/srv/GetWaypoints_Event";
}

template<>
struct has_fixed_size<take_picture_interfaces::srv::GetWaypoints_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Request>::value && has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Response>::value> {};

template<>
struct is_message<take_picture_interfaces::srv::GetWaypoints_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<take_picture_interfaces::srv::GetWaypoints>()
{
  return "take_picture_interfaces::srv::GetWaypoints";
}

template<>
inline const char * name<take_picture_interfaces::srv::GetWaypoints>()
{
  return "take_picture_interfaces/srv/GetWaypoints";
}

template<>
struct has_fixed_size<take_picture_interfaces::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<take_picture_interfaces::srv::GetWaypoints_Request>::value &&
    has_fixed_size<take_picture_interfaces::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<take_picture_interfaces::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Request>::value &&
    has_bounded_size<take_picture_interfaces::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct is_service<take_picture_interfaces::srv::GetWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<take_picture_interfaces::srv::GetWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<take_picture_interfaces::srv::GetWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
