// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
#define TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetWaypoints in the package take_picture_interfaces.
typedef struct take_picture_interfaces__srv__GetWaypoints_Request
{
  uint8_t structure_needs_at_least_one_member;
} take_picture_interfaces__srv__GetWaypoints_Request;

// Struct for a sequence of take_picture_interfaces__srv__GetWaypoints_Request.
typedef struct take_picture_interfaces__srv__GetWaypoints_Request__Sequence
{
  take_picture_interfaces__srv__GetWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} take_picture_interfaces__srv__GetWaypoints_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "take_picture_interfaces/msg/detail/waypoint_list__struct.h"

/// Struct defined in srv/GetWaypoints in the package take_picture_interfaces.
typedef struct take_picture_interfaces__srv__GetWaypoints_Response
{
  take_picture_interfaces__msg__WaypointList__Sequence waypoints;
} take_picture_interfaces__srv__GetWaypoints_Response;

// Struct for a sequence of take_picture_interfaces__srv__GetWaypoints_Response.
typedef struct take_picture_interfaces__srv__GetWaypoints_Response__Sequence
{
  take_picture_interfaces__srv__GetWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} take_picture_interfaces__srv__GetWaypoints_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  take_picture_interfaces__srv__GetWaypoints_Event__request__MAX_SIZE = 1
};
// response
enum
{
  take_picture_interfaces__srv__GetWaypoints_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetWaypoints in the package take_picture_interfaces.
typedef struct take_picture_interfaces__srv__GetWaypoints_Event
{
  service_msgs__msg__ServiceEventInfo info;
  take_picture_interfaces__srv__GetWaypoints_Request__Sequence request;
  take_picture_interfaces__srv__GetWaypoints_Response__Sequence response;
} take_picture_interfaces__srv__GetWaypoints_Event;

// Struct for a sequence of take_picture_interfaces__srv__GetWaypoints_Event.
typedef struct take_picture_interfaces__srv__GetWaypoints_Event__Sequence
{
  take_picture_interfaces__srv__GetWaypoints_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} take_picture_interfaces__srv__GetWaypoints_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
