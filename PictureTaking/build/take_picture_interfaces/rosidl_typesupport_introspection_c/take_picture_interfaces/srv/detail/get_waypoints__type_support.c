// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "take_picture_interfaces/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
#include "take_picture_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  take_picture_interfaces__srv__GetWaypoints_Request__init(message_memory);
}

void take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_fini_function(void * message_memory)
{
  take_picture_interfaces__srv__GetWaypoints_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces__srv__GetWaypoints_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_members = {
  "take_picture_interfaces__srv",  // message namespace
  "GetWaypoints_Request",  // message name
  1,  // number of fields
  sizeof(take_picture_interfaces__srv__GetWaypoints_Request),
  take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_member_array,  // message members
  take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle = {
  0,
  &take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_take_picture_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Request)() {
  if (!take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle.typesupport_identifier) {
    take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "take_picture_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.h"


// Include directives for member types
// Member `waypoints`
#include "take_picture_interfaces/msg/waypoint_list.h"
// Member `waypoints`
#include "take_picture_interfaces/msg/detail/waypoint_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  take_picture_interfaces__srv__GetWaypoints_Response__init(message_memory);
}

void take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_fini_function(void * message_memory)
{
  take_picture_interfaces__srv__GetWaypoints_Response__fini(message_memory);
}

size_t take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__size_function__GetWaypoints_Response__waypoints(
  const void * untyped_member)
{
  const take_picture_interfaces__msg__WaypointList__Sequence * member =
    (const take_picture_interfaces__msg__WaypointList__Sequence *)(untyped_member);
  return member->size;
}

const void * take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Response__waypoints(
  const void * untyped_member, size_t index)
{
  const take_picture_interfaces__msg__WaypointList__Sequence * member =
    (const take_picture_interfaces__msg__WaypointList__Sequence *)(untyped_member);
  return &member->data[index];
}

void * take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Response__waypoints(
  void * untyped_member, size_t index)
{
  take_picture_interfaces__msg__WaypointList__Sequence * member =
    (take_picture_interfaces__msg__WaypointList__Sequence *)(untyped_member);
  return &member->data[index];
}

void take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__fetch_function__GetWaypoints_Response__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const take_picture_interfaces__msg__WaypointList * item =
    ((const take_picture_interfaces__msg__WaypointList *)
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Response__waypoints(untyped_member, index));
  take_picture_interfaces__msg__WaypointList * value =
    (take_picture_interfaces__msg__WaypointList *)(untyped_value);
  *value = *item;
}

void take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__assign_function__GetWaypoints_Response__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  take_picture_interfaces__msg__WaypointList * item =
    ((take_picture_interfaces__msg__WaypointList *)
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Response__waypoints(untyped_member, index));
  const take_picture_interfaces__msg__WaypointList * value =
    (const take_picture_interfaces__msg__WaypointList *)(untyped_value);
  *item = *value;
}

bool take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__resize_function__GetWaypoints_Response__waypoints(
  void * untyped_member, size_t size)
{
  take_picture_interfaces__msg__WaypointList__Sequence * member =
    (take_picture_interfaces__msg__WaypointList__Sequence *)(untyped_member);
  take_picture_interfaces__msg__WaypointList__Sequence__fini(member);
  return take_picture_interfaces__msg__WaypointList__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces__srv__GetWaypoints_Response, waypoints),  // bytes offset in struct
    NULL,  // default value
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__size_function__GetWaypoints_Response__waypoints,  // size() function pointer
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Response__waypoints,  // get_const(index) function pointer
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Response__waypoints,  // get(index) function pointer
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__fetch_function__GetWaypoints_Response__waypoints,  // fetch(index, &value) function pointer
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__assign_function__GetWaypoints_Response__waypoints,  // assign(index, value) function pointer
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__resize_function__GetWaypoints_Response__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_members = {
  "take_picture_interfaces__srv",  // message namespace
  "GetWaypoints_Response",  // message name
  1,  // number of fields
  sizeof(take_picture_interfaces__srv__GetWaypoints_Response),
  take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_member_array,  // message members
  take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle = {
  0,
  &take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_take_picture_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Response)() {
  take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, msg, WaypointList)();
  if (!take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle.typesupport_identifier) {
    take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "take_picture_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "take_picture_interfaces/srv/get_waypoints.h"
// Member `request`
// Member `response`
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  take_picture_interfaces__srv__GetWaypoints_Event__init(message_memory);
}

void take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_fini_function(void * message_memory)
{
  take_picture_interfaces__srv__GetWaypoints_Event__fini(message_memory);
}

size_t take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__size_function__GetWaypoints_Event__request(
  const void * untyped_member)
{
  const take_picture_interfaces__srv__GetWaypoints_Request__Sequence * member =
    (const take_picture_interfaces__srv__GetWaypoints_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Event__request(
  const void * untyped_member, size_t index)
{
  const take_picture_interfaces__srv__GetWaypoints_Request__Sequence * member =
    (const take_picture_interfaces__srv__GetWaypoints_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Event__request(
  void * untyped_member, size_t index)
{
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence * member =
    (take_picture_interfaces__srv__GetWaypoints_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__GetWaypoints_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const take_picture_interfaces__srv__GetWaypoints_Request * item =
    ((const take_picture_interfaces__srv__GetWaypoints_Request *)
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Event__request(untyped_member, index));
  take_picture_interfaces__srv__GetWaypoints_Request * value =
    (take_picture_interfaces__srv__GetWaypoints_Request *)(untyped_value);
  *value = *item;
}

void take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__GetWaypoints_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  take_picture_interfaces__srv__GetWaypoints_Request * item =
    ((take_picture_interfaces__srv__GetWaypoints_Request *)
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Event__request(untyped_member, index));
  const take_picture_interfaces__srv__GetWaypoints_Request * value =
    (const take_picture_interfaces__srv__GetWaypoints_Request *)(untyped_value);
  *item = *value;
}

bool take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__GetWaypoints_Event__request(
  void * untyped_member, size_t size)
{
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence * member =
    (take_picture_interfaces__srv__GetWaypoints_Request__Sequence *)(untyped_member);
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence__fini(member);
  return take_picture_interfaces__srv__GetWaypoints_Request__Sequence__init(member, size);
}

size_t take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__size_function__GetWaypoints_Event__response(
  const void * untyped_member)
{
  const take_picture_interfaces__srv__GetWaypoints_Response__Sequence * member =
    (const take_picture_interfaces__srv__GetWaypoints_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Event__response(
  const void * untyped_member, size_t index)
{
  const take_picture_interfaces__srv__GetWaypoints_Response__Sequence * member =
    (const take_picture_interfaces__srv__GetWaypoints_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Event__response(
  void * untyped_member, size_t index)
{
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence * member =
    (take_picture_interfaces__srv__GetWaypoints_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__GetWaypoints_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const take_picture_interfaces__srv__GetWaypoints_Response * item =
    ((const take_picture_interfaces__srv__GetWaypoints_Response *)
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Event__response(untyped_member, index));
  take_picture_interfaces__srv__GetWaypoints_Response * value =
    (take_picture_interfaces__srv__GetWaypoints_Response *)(untyped_value);
  *value = *item;
}

void take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__GetWaypoints_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  take_picture_interfaces__srv__GetWaypoints_Response * item =
    ((take_picture_interfaces__srv__GetWaypoints_Response *)
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Event__response(untyped_member, index));
  const take_picture_interfaces__srv__GetWaypoints_Response * value =
    (const take_picture_interfaces__srv__GetWaypoints_Response *)(untyped_value);
  *item = *value;
}

bool take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__GetWaypoints_Event__response(
  void * untyped_member, size_t size)
{
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence * member =
    (take_picture_interfaces__srv__GetWaypoints_Response__Sequence *)(untyped_member);
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence__fini(member);
  return take_picture_interfaces__srv__GetWaypoints_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces__srv__GetWaypoints_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(take_picture_interfaces__srv__GetWaypoints_Event, request),  // bytes offset in struct
    NULL,  // default value
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__size_function__GetWaypoints_Event__request,  // size() function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Event__request,  // get_const(index) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Event__request,  // get(index) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__GetWaypoints_Event__request,  // fetch(index, &value) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__GetWaypoints_Event__request,  // assign(index, value) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__GetWaypoints_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(take_picture_interfaces__srv__GetWaypoints_Event, response),  // bytes offset in struct
    NULL,  // default value
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__size_function__GetWaypoints_Event__response,  // size() function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__GetWaypoints_Event__response,  // get_const(index) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__get_function__GetWaypoints_Event__response,  // get(index) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__GetWaypoints_Event__response,  // fetch(index, &value) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__GetWaypoints_Event__response,  // assign(index, value) function pointer
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__GetWaypoints_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_members = {
  "take_picture_interfaces__srv",  // message namespace
  "GetWaypoints_Event",  // message name
  3,  // number of fields
  sizeof(take_picture_interfaces__srv__GetWaypoints_Event),
  take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_member_array,  // message members
  take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_type_support_handle = {
  0,
  &take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_take_picture_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Event)() {
  take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Request)();
  take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Response)();
  if (!take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_type_support_handle.typesupport_identifier) {
    take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "take_picture_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_members = {
  "take_picture_interfaces__srv",  // service namespace
  "GetWaypoints",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle,
  NULL,  // response message
  // take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle
  NULL  // event_message
  // take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle
};


static rosidl_service_type_support_t take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle = {
  0,
  &take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_members,
  get_service_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle,
  &take_picture_interfaces__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle,
  &take_picture_interfaces__srv__GetWaypoints_Event__rosidl_typesupport_introspection_c__GetWaypoints_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    take_picture_interfaces,
    srv,
    GetWaypoints
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    take_picture_interfaces,
    srv,
    GetWaypoints
  ),
  &take_picture_interfaces__srv__GetWaypoints__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_take_picture_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints)() {
  if (!take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle.typesupport_identifier) {
    take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Event)()->data;
  }

  return &take_picture_interfaces__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle;
}
