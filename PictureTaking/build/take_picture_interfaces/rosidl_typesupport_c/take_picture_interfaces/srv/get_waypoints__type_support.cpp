// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__struct.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__type_support.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetWaypoints_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_Request_type_support_ids_t;

static const _GetWaypoints_Request_type_support_ids_t _GetWaypoints_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetWaypoints_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetWaypoints_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetWaypoints_Request_type_support_symbol_names_t _GetWaypoints_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, take_picture_interfaces, srv, GetWaypoints_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Request)),
  }
};

typedef struct _GetWaypoints_Request_type_support_data_t
{
  void * data[2];
} _GetWaypoints_Request_type_support_data_t;

static _GetWaypoints_Request_type_support_data_t _GetWaypoints_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetWaypoints_Request_message_typesupport_map = {
  2,
  "take_picture_interfaces",
  &_GetWaypoints_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetWaypoints_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetWaypoints_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetWaypoints_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace take_picture_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, take_picture_interfaces, srv, GetWaypoints_Request)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_c::GetWaypoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__type_support.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetWaypoints_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_Response_type_support_ids_t;

static const _GetWaypoints_Response_type_support_ids_t _GetWaypoints_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetWaypoints_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetWaypoints_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetWaypoints_Response_type_support_symbol_names_t _GetWaypoints_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, take_picture_interfaces, srv, GetWaypoints_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Response)),
  }
};

typedef struct _GetWaypoints_Response_type_support_data_t
{
  void * data[2];
} _GetWaypoints_Response_type_support_data_t;

static _GetWaypoints_Response_type_support_data_t _GetWaypoints_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetWaypoints_Response_message_typesupport_map = {
  2,
  "take_picture_interfaces",
  &_GetWaypoints_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetWaypoints_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetWaypoints_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetWaypoints_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace take_picture_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, take_picture_interfaces, srv, GetWaypoints_Response)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_c::GetWaypoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__type_support.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetWaypoints_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_Event_type_support_ids_t;

static const _GetWaypoints_Event_type_support_ids_t _GetWaypoints_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetWaypoints_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetWaypoints_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetWaypoints_Event_type_support_symbol_names_t _GetWaypoints_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, take_picture_interfaces, srv, GetWaypoints_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints_Event)),
  }
};

typedef struct _GetWaypoints_Event_type_support_data_t
{
  void * data[2];
} _GetWaypoints_Event_type_support_data_t;

static _GetWaypoints_Event_type_support_data_t _GetWaypoints_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetWaypoints_Event_message_typesupport_map = {
  2,
  "take_picture_interfaces",
  &_GetWaypoints_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetWaypoints_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetWaypoints_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetWaypoints_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace take_picture_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, take_picture_interfaces, srv, GetWaypoints_Event)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_c::GetWaypoints_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetWaypoints_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_type_support_ids_t;

static const _GetWaypoints_type_support_ids_t _GetWaypoints_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetWaypoints_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetWaypoints_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetWaypoints_type_support_symbol_names_t _GetWaypoints_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, take_picture_interfaces, srv, GetWaypoints)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, take_picture_interfaces, srv, GetWaypoints)),
  }
};

typedef struct _GetWaypoints_type_support_data_t
{
  void * data[2];
} _GetWaypoints_type_support_data_t;

static _GetWaypoints_type_support_data_t _GetWaypoints_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetWaypoints_service_typesupport_map = {
  2,
  "take_picture_interfaces",
  &_GetWaypoints_service_typesupport_ids.typesupport_identifier[0],
  &_GetWaypoints_service_typesupport_symbol_names.symbol_name[0],
  &_GetWaypoints_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetWaypoints_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetWaypoints_Request_message_type_support_handle,
  &GetWaypoints_Response_message_type_support_handle,
  &GetWaypoints_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace take_picture_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, take_picture_interfaces, srv, GetWaypoints)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_c::GetWaypoints_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
