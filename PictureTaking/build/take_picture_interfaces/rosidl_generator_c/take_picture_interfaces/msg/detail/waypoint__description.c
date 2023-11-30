// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from take_picture_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include "take_picture_interfaces/msg/detail/waypoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_take_picture_interfaces
const rosidl_type_hash_t *
take_picture_interfaces__msg__Waypoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x16, 0x0b, 0x00, 0x06, 0xad, 0xb3, 0x60,
      0x00, 0xa8, 0x0d, 0x86, 0x1d, 0x6d, 0x1b, 0x9e,
      0x31, 0x3b, 0x26, 0x4c, 0xfe, 0x4f, 0x3d, 0x64,
      0x73, 0x3c, 0x54, 0x06, 0x4c, 0x94, 0xb9, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char take_picture_interfaces__msg__Waypoint__TYPE_NAME[] = "take_picture_interfaces/msg/Waypoint";

// Define type names, field names, and default values
static char take_picture_interfaces__msg__Waypoint__FIELD_NAME__x[] = "x";
static char take_picture_interfaces__msg__Waypoint__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field take_picture_interfaces__msg__Waypoint__FIELDS[] = {
  {
    {take_picture_interfaces__msg__Waypoint__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__msg__Waypoint__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
take_picture_interfaces__msg__Waypoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
      {take_picture_interfaces__msg__Waypoint__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message type for a singular waypoint\n"
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
take_picture_interfaces__msg__Waypoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
take_picture_interfaces__msg__Waypoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *take_picture_interfaces__msg__Waypoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
