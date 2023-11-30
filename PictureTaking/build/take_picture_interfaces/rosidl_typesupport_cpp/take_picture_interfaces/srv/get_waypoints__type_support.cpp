// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetWaypoints_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_Request_type_support_ids_t;

static const _GetWaypoints_Request_type_support_ids_t _GetWaypoints_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, take_picture_interfaces, srv, GetWaypoints_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Request>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_cpp::GetWaypoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, take_picture_interfaces, srv, GetWaypoints_Request)() {
  return get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetWaypoints_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_Response_type_support_ids_t;

static const _GetWaypoints_Response_type_support_ids_t _GetWaypoints_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, take_picture_interfaces, srv, GetWaypoints_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Response>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_cpp::GetWaypoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, take_picture_interfaces, srv, GetWaypoints_Response)() {
  return get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetWaypoints_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_Event_type_support_ids_t;

static const _GetWaypoints_Event_type_support_ids_t _GetWaypoints_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, take_picture_interfaces, srv, GetWaypoints_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Event>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_cpp::GetWaypoints_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, take_picture_interfaces, srv, GetWaypoints_Event)() {
  return get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetWaypoints_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetWaypoints_type_support_ids_t;

static const _GetWaypoints_type_support_ids_t _GetWaypoints_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, take_picture_interfaces, srv, GetWaypoints)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetWaypoints_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<take_picture_interfaces::srv::GetWaypoints>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<take_picture_interfaces::srv::GetWaypoints>,
  &take_picture_interfaces__srv__GetWaypoints__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace take_picture_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<take_picture_interfaces::srv::GetWaypoints>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_cpp::GetWaypoints_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
