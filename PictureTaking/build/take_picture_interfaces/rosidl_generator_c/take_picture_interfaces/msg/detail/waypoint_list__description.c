// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#include "take_picture_interfaces/msg/detail/waypoint_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_take_picture_interfaces
const rosidl_type_hash_t *
take_picture_interfaces__msg__WaypointList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xc9, 0xef, 0xe3, 0x92, 0x46, 0x4b, 0xe8,
      0x00, 0x94, 0x4a, 0x20, 0x51, 0x43, 0xa8, 0x43,
      0xd9, 0xb0, 0xdb, 0xde, 0x84, 0xf7, 0x00, 0x9f,
      0x01, 0x24, 0x19, 0x3e, 0x96, 0x58, 0x3c, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "take_picture_interfaces/msg/detail/waypoint__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t take_picture_interfaces__msg__Waypoint__EXPECTED_HASH = {1, {
    0x5a, 0x16, 0x0b, 0x00, 0x06, 0xad, 0xb3, 0x60,
    0x00, 0xa8, 0x0d, 0x86, 0x1d, 0x6d, 0x1b, 0x9e,
    0x31, 0x3b, 0x26, 0x4c, 0xfe, 0x4f, 0x3d, 0x64,
    0x73, 0x3c, 0x54, 0x06, 0x4c, 0x94, 0xb9, 0x3b,
  }};
#endif

static char take_picture_interfaces__msg__WaypointList__TYPE_NAME[] = "take_picture_interfaces/msg/WaypointList";
static char take_picture_interfaces__msg__Waypoint__TYPE_NAME[] = "take_picture_interfaces/msg/Waypoint";

// Define type names, field names, and default values
static char take_picture_interfaces__msg__WaypointList__FIELD_NAME__waypoints[] = "waypoints";

static rosidl_runtime_c__type_description__Field take_picture_interfaces__msg__WaypointList__FIELDS[] = {
  {
    {take_picture_interfaces__msg__WaypointList__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription take_picture_interfaces__msg__WaypointList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
take_picture_interfaces__msg__WaypointList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {take_picture_interfaces__msg__WaypointList__TYPE_NAME, 40, 40},
      {take_picture_interfaces__msg__WaypointList__FIELDS, 1, 1},
    },
    {take_picture_interfaces__msg__WaypointList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&take_picture_interfaces__msg__Waypoint__EXPECTED_HASH, take_picture_interfaces__msg__Waypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = take_picture_interfaces__msg__Waypoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message type for many waypoints. Array of waypoint msgs (float64 x, float64 y)\n"
  "Waypoint[] waypoints";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
take_picture_interfaces__msg__WaypointList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {take_picture_interfaces__msg__WaypointList__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 102, 102},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
take_picture_interfaces__msg__WaypointList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *take_picture_interfaces__msg__WaypointList__get_individual_type_description_source(NULL),
    sources[1] = *take_picture_interfaces__msg__Waypoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
