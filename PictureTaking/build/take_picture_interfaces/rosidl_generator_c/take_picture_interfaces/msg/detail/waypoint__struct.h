// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from take_picture_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Waypoint in the package take_picture_interfaces.
/**
  * Message type for a singular waypoint
 */
typedef struct take_picture_interfaces__msg__Waypoint
{
  double x;
  double y;
} take_picture_interfaces__msg__Waypoint;

// Struct for a sequence of take_picture_interfaces__msg__Waypoint.
typedef struct take_picture_interfaces__msg__Waypoint__Sequence
{
  take_picture_interfaces__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} take_picture_interfaces__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
