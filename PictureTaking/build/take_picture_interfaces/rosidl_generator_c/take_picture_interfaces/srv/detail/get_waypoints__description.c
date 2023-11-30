// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_take_picture_interfaces
const rosidl_type_hash_t *
take_picture_interfaces__srv__GetWaypoints__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x67, 0x0e, 0xc1, 0x24, 0xff, 0x5c, 0x94,
      0xbb, 0x59, 0x20, 0xc3, 0x5f, 0x93, 0xd6, 0x89,
      0x5c, 0xae, 0x03, 0x8f, 0x4a, 0xc5, 0x8b, 0x16,
      0x16, 0xf1, 0xfe, 0xe1, 0x80, 0x04, 0xe4, 0x44,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_take_picture_interfaces
const rosidl_type_hash_t *
take_picture_interfaces__srv__GetWaypoints_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xb5, 0x01, 0x47, 0xb5, 0xd3, 0x57, 0xfa,
      0xee, 0x5a, 0x17, 0xc9, 0x3a, 0x50, 0xf0, 0xd8,
      0x7f, 0xe2, 0x2e, 0xdd, 0xd7, 0x39, 0xff, 0xb4,
      0xc1, 0xfe, 0x02, 0x05, 0x61, 0xfd, 0xd9, 0x66,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_take_picture_interfaces
const rosidl_type_hash_t *
take_picture_interfaces__srv__GetWaypoints_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0x09, 0xe6, 0x16, 0xde, 0xf4, 0xc5, 0x98,
      0x57, 0x90, 0x0c, 0xda, 0x84, 0x62, 0x53, 0xad,
      0xb5, 0x40, 0xd7, 0xbc, 0xfe, 0x3c, 0xbf, 0xb1,
      0xd3, 0x2f, 0x0f, 0x72, 0x9f, 0x78, 0xc0, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_take_picture_interfaces
const rosidl_type_hash_t *
take_picture_interfaces__srv__GetWaypoints_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x7f, 0x71, 0x58, 0xe7, 0x7b, 0x05, 0x18,
      0x10, 0x43, 0x40, 0xb8, 0x1e, 0xf5, 0x9b, 0x92,
      0xc4, 0x1f, 0xe5, 0x50, 0xab, 0x52, 0xb2, 0x9c,
      0x20, 0x48, 0xdf, 0xe8, 0x9d, 0x60, 0x94, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "take_picture_interfaces/msg/detail/waypoint__functions.h"
#include "take_picture_interfaces/msg/detail/waypoint_list__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t take_picture_interfaces__msg__Waypoint__EXPECTED_HASH = {1, {
    0x5a, 0x16, 0x0b, 0x00, 0x06, 0xad, 0xb3, 0x60,
    0x00, 0xa8, 0x0d, 0x86, 0x1d, 0x6d, 0x1b, 0x9e,
    0x31, 0x3b, 0x26, 0x4c, 0xfe, 0x4f, 0x3d, 0x64,
    0x73, 0x3c, 0x54, 0x06, 0x4c, 0x94, 0xb9, 0x3b,
  }};
static const rosidl_type_hash_t take_picture_interfaces__msg__WaypointList__EXPECTED_HASH = {1, {
    0x23, 0xc9, 0xef, 0xe3, 0x92, 0x46, 0x4b, 0xe8,
    0x00, 0x94, 0x4a, 0x20, 0x51, 0x43, 0xa8, 0x43,
    0xd9, 0xb0, 0xdb, 0xde, 0x84, 0xf7, 0x00, 0x9f,
    0x01, 0x24, 0x19, 0x3e, 0x96, 0x58, 0x3c, 0x1f,
  }};
#endif

static char take_picture_interfaces__srv__GetWaypoints__TYPE_NAME[] = "take_picture_interfaces/srv/GetWaypoints";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char take_picture_interfaces__msg__Waypoint__TYPE_NAME[] = "take_picture_interfaces/msg/Waypoint";
static char take_picture_interfaces__msg__WaypointList__TYPE_NAME[] = "take_picture_interfaces/msg/WaypointList";
static char take_picture_interfaces__srv__GetWaypoints_Event__TYPE_NAME[] = "take_picture_interfaces/srv/GetWaypoints_Event";
static char take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME[] = "take_picture_interfaces/srv/GetWaypoints_Request";
static char take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME[] = "take_picture_interfaces/srv/GetWaypoints_Response";

// Define type names, field names, and default values
static char take_picture_interfaces__srv__GetWaypoints__FIELD_NAME__request_message[] = "request_message";
static char take_picture_interfaces__srv__GetWaypoints__FIELD_NAME__response_message[] = "response_message";
static char take_picture_interfaces__srv__GetWaypoints__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field take_picture_interfaces__srv__GetWaypoints__FIELDS[] = {
  {
    {take_picture_interfaces__srv__GetWaypoints__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {take_picture_interfaces__srv__GetWaypoints_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription take_picture_interfaces__srv__GetWaypoints__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__msg__WaypointList__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
take_picture_interfaces__srv__GetWaypoints__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {take_picture_interfaces__srv__GetWaypoints__TYPE_NAME, 40, 40},
      {take_picture_interfaces__srv__GetWaypoints__FIELDS, 3, 3},
    },
    {take_picture_interfaces__srv__GetWaypoints__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&take_picture_interfaces__msg__Waypoint__EXPECTED_HASH, take_picture_interfaces__msg__Waypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = take_picture_interfaces__msg__Waypoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&take_picture_interfaces__msg__WaypointList__EXPECTED_HASH, take_picture_interfaces__msg__WaypointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = take_picture_interfaces__msg__WaypointList__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = take_picture_interfaces__srv__GetWaypoints_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = take_picture_interfaces__srv__GetWaypoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = take_picture_interfaces__srv__GetWaypoints_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char take_picture_interfaces__srv__GetWaypoints_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field take_picture_interfaces__srv__GetWaypoints_Request__FIELDS[] = {
  {
    {take_picture_interfaces__srv__GetWaypoints_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
take_picture_interfaces__srv__GetWaypoints_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME, 48, 48},
      {take_picture_interfaces__srv__GetWaypoints_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char take_picture_interfaces__srv__GetWaypoints_Response__FIELD_NAME__waypoints[] = "waypoints";

static rosidl_runtime_c__type_description__Field take_picture_interfaces__srv__GetWaypoints_Response__FIELDS[] = {
  {
    {take_picture_interfaces__srv__GetWaypoints_Response__FIELD_NAME__waypoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {take_picture_interfaces__msg__WaypointList__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription take_picture_interfaces__srv__GetWaypoints_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__msg__WaypointList__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
take_picture_interfaces__srv__GetWaypoints_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME, 49, 49},
      {take_picture_interfaces__srv__GetWaypoints_Response__FIELDS, 1, 1},
    },
    {take_picture_interfaces__srv__GetWaypoints_Response__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&take_picture_interfaces__msg__Waypoint__EXPECTED_HASH, take_picture_interfaces__msg__Waypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = take_picture_interfaces__msg__Waypoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&take_picture_interfaces__msg__WaypointList__EXPECTED_HASH, take_picture_interfaces__msg__WaypointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = take_picture_interfaces__msg__WaypointList__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char take_picture_interfaces__srv__GetWaypoints_Event__FIELD_NAME__info[] = "info";
static char take_picture_interfaces__srv__GetWaypoints_Event__FIELD_NAME__request[] = "request";
static char take_picture_interfaces__srv__GetWaypoints_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field take_picture_interfaces__srv__GetWaypoints_Event__FIELDS[] = {
  {
    {take_picture_interfaces__srv__GetWaypoints_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription take_picture_interfaces__srv__GetWaypoints_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__msg__Waypoint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__msg__WaypointList__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
take_picture_interfaces__srv__GetWaypoints_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {take_picture_interfaces__srv__GetWaypoints_Event__TYPE_NAME, 46, 46},
      {take_picture_interfaces__srv__GetWaypoints_Event__FIELDS, 3, 3},
    },
    {take_picture_interfaces__srv__GetWaypoints_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&take_picture_interfaces__msg__Waypoint__EXPECTED_HASH, take_picture_interfaces__msg__Waypoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = take_picture_interfaces__msg__Waypoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&take_picture_interfaces__msg__WaypointList__EXPECTED_HASH, take_picture_interfaces__msg__WaypointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = take_picture_interfaces__msg__WaypointList__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = take_picture_interfaces__srv__GetWaypoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = take_picture_interfaces__srv__GetWaypoints_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "\n"
  "---\n"
  "WaypointList[] waypoints ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
take_picture_interfaces__srv__GetWaypoints__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {take_picture_interfaces__srv__GetWaypoints__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
take_picture_interfaces__srv__GetWaypoints_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {take_picture_interfaces__srv__GetWaypoints_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
take_picture_interfaces__srv__GetWaypoints_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {take_picture_interfaces__srv__GetWaypoints_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
take_picture_interfaces__srv__GetWaypoints_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {take_picture_interfaces__srv__GetWaypoints_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
take_picture_interfaces__srv__GetWaypoints__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *take_picture_interfaces__srv__GetWaypoints__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *take_picture_interfaces__msg__Waypoint__get_individual_type_description_source(NULL);
    sources[4] = *take_picture_interfaces__msg__WaypointList__get_individual_type_description_source(NULL);
    sources[5] = *take_picture_interfaces__srv__GetWaypoints_Event__get_individual_type_description_source(NULL);
    sources[6] = *take_picture_interfaces__srv__GetWaypoints_Request__get_individual_type_description_source(NULL);
    sources[7] = *take_picture_interfaces__srv__GetWaypoints_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
take_picture_interfaces__srv__GetWaypoints_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *take_picture_interfaces__srv__GetWaypoints_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
take_picture_interfaces__srv__GetWaypoints_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *take_picture_interfaces__srv__GetWaypoints_Response__get_individual_type_description_source(NULL),
    sources[1] = *take_picture_interfaces__msg__Waypoint__get_individual_type_description_source(NULL);
    sources[2] = *take_picture_interfaces__msg__WaypointList__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
take_picture_interfaces__srv__GetWaypoints_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *take_picture_interfaces__srv__GetWaypoints_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *take_picture_interfaces__msg__Waypoint__get_individual_type_description_source(NULL);
    sources[4] = *take_picture_interfaces__msg__WaypointList__get_individual_type_description_source(NULL);
    sources[5] = *take_picture_interfaces__srv__GetWaypoints_Request__get_individual_type_description_source(NULL);
    sources[6] = *take_picture_interfaces__srv__GetWaypoints_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
