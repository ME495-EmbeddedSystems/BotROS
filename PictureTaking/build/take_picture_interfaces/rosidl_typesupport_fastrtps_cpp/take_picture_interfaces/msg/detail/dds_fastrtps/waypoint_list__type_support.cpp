// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice
#include "take_picture_interfaces/msg/detail/waypoint_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "take_picture_interfaces/msg/detail/waypoint_list__functions.h"
#include "take_picture_interfaces/msg/detail/waypoint_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace take_picture_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const take_picture_interfaces::msg::Waypoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  take_picture_interfaces::msg::Waypoint &);
size_t get_serialized_size(
  const take_picture_interfaces::msg::Waypoint &,
  size_t current_alignment);
size_t
max_serialized_size_Waypoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace take_picture_interfaces


namespace take_picture_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_take_picture_interfaces
cdr_serialize(
  const take_picture_interfaces::msg::WaypointList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: waypoints
  {
    size_t size = ros_message.waypoints.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      take_picture_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.waypoints[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_take_picture_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  take_picture_interfaces::msg::WaypointList & ros_message)
{
  // Member: waypoints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.waypoints.resize(size);
    for (size_t i = 0; i < size; i++) {
      take_picture_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.waypoints[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_take_picture_interfaces
get_serialized_size(
  const take_picture_interfaces::msg::WaypointList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: waypoints
  {
    size_t array_size = ros_message.waypoints.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        take_picture_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.waypoints[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_take_picture_interfaces
max_serialized_size_WaypointList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: waypoints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        take_picture_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Waypoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _WaypointList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const take_picture_interfaces::msg::WaypointList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WaypointList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<take_picture_interfaces::msg::WaypointList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WaypointList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const take_picture_interfaces::msg::WaypointList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WaypointList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WaypointList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WaypointList__callbacks = {
  "take_picture_interfaces::msg",
  "WaypointList",
  _WaypointList__cdr_serialize,
  _WaypointList__cdr_deserialize,
  _WaypointList__get_serialized_size,
  _WaypointList__max_serialized_size
};

static rosidl_message_type_support_t _WaypointList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WaypointList__callbacks,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__msg__WaypointList__get_type_hash,
  &take_picture_interfaces__msg__WaypointList__get_type_description,
  &take_picture_interfaces__msg__WaypointList__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace take_picture_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_take_picture_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::msg::WaypointList>()
{
  return &take_picture_interfaces::msg::typesupport_fastrtps_cpp::_WaypointList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, take_picture_interfaces, msg, WaypointList)() {
  return &take_picture_interfaces::msg::typesupport_fastrtps_cpp::_WaypointList__handle;
}

#ifdef __cplusplus
}
#endif
