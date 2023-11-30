// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_H_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "take_picture_interfaces/msg/detail/waypoint__struct.h"

/// Struct defined in msg/WaypointList in the package take_picture_interfaces.
/**
  * Message type for many waypoints. Array of waypoint msgs (float64 x, float64 y)
 */
typedef struct take_picture_interfaces__msg__WaypointList
{
  take_picture_interfaces__msg__Waypoint__Sequence waypoints;
} take_picture_interfaces__msg__WaypointList;

// Struct for a sequence of take_picture_interfaces__msg__WaypointList.
typedef struct take_picture_interfaces__msg__WaypointList__Sequence
{
  take_picture_interfaces__msg__WaypointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} take_picture_interfaces__msg__WaypointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_H_
