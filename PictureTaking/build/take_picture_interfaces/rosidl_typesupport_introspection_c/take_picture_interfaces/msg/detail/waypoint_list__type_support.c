// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "take_picture_interfaces/msg/detail/waypoint_list__rosidl_typesupport_introspection_c.h"
#include "take_picture_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "take_picture_interfaces/msg/detail/waypoint_list__functions.h"
#include "take_picture_interfaces/msg/detail/waypoint_list__struct.h"


// Include directives for member types
// Member `waypoints`
#include "take_picture_interfaces/msg/waypoint.h"
// Member `waypoints`
#include "take_picture_interfaces/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  take_picture_interfaces__msg__WaypointList__init(message_memory);
}

void take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_fini_function(void * message_memory)
{
  take_picture_interfaces__msg__WaypointList__fini(message_memory);
}

size_t take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__size_function__WaypointList__waypoints(
  const void * untyped_member)
{
  const take_picture_interfaces__msg__Waypoint__Sequence * member =
    (const take_picture_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_const_function__WaypointList__waypoints(
  const void * untyped_member, size_t index)
{
  const take_picture_interfaces__msg__Waypoint__Sequence * member =
    (const take_picture_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_function__WaypointList__waypoints(
  void * untyped_member, size_t index)
{
  take_picture_interfaces__msg__Waypoint__Sequence * member =
    (take_picture_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__fetch_function__WaypointList__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const take_picture_interfaces__msg__Waypoint * item =
    ((const take_picture_interfaces__msg__Waypoint *)
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_const_function__WaypointList__waypoints(untyped_member, index));
  take_picture_interfaces__msg__Waypoint * value =
    (take_picture_interfaces__msg__Waypoint *)(untyped_value);
  *value = *item;
}

void take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__assign_function__WaypointList__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  take_picture_interfaces__msg__Waypoint * item =
    ((take_picture_interfaces__msg__Waypoint *)
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_function__WaypointList__waypoints(untyped_member, index));
  const take_picture_interfaces__msg__Waypoint * value =
    (const take_picture_interfaces__msg__Waypoint *)(untyped_value);
  *item = *value;
}

bool take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__resize_function__WaypointList__waypoints(
  void * untyped_member, size_t size)
{
  take_picture_interfaces__msg__Waypoint__Sequence * member =
    (take_picture_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  take_picture_interfaces__msg__Waypoint__Sequence__fini(member);
  return take_picture_interfaces__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces__msg__WaypointList, waypoints),  // bytes offset in struct
    NULL,  // default value
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__size_function__WaypointList__waypoints,  // size() function pointer
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_const_function__WaypointList__waypoints,  // get_const(index) function pointer
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_function__WaypointList__waypoints,  // get(index) function pointer
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__fetch_function__WaypointList__waypoints,  // fetch(index, &value) function pointer
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__assign_function__WaypointList__waypoints,  // assign(index, value) function pointer
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__resize_function__WaypointList__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_members = {
  "take_picture_interfaces__msg",  // message namespace
  "WaypointList",  // message name
  1,  // number of fields
  sizeof(take_picture_interfaces__msg__WaypointList),
  take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array,  // message members
  take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_init_function,  // function to initialize message memory (memory has to be allocated)
  take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle = {
  0,
  &take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__msg__WaypointList__get_type_hash,
  &take_picture_interfaces__msg__WaypointList__get_type_description,
  &take_picture_interfaces__msg__WaypointList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_take_picture_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, msg, WaypointList)() {
  take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, msg, Waypoint)();
  if (!take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle.typesupport_identifier) {
    take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &take_picture_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
