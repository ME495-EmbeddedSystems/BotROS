// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
#include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetWaypoints_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) take_picture_interfaces::srv::GetWaypoints_Request(_init);
}

void GetWaypoints_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<take_picture_interfaces::srv::GetWaypoints_Request *>(message_memory);
  typed_message->~GetWaypoints_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetWaypoints_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces::srv::GetWaypoints_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetWaypoints_Request_message_members = {
  "take_picture_interfaces::srv",  // message namespace
  "GetWaypoints_Request",  // message name
  1,  // number of fields
  sizeof(take_picture_interfaces::srv::GetWaypoints_Request),
  GetWaypoints_Request_message_member_array,  // message members
  GetWaypoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWaypoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetWaypoints_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetWaypoints_Request_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace take_picture_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Request>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints_Request)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetWaypoints_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) take_picture_interfaces::srv::GetWaypoints_Response(_init);
}

void GetWaypoints_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<take_picture_interfaces::srv::GetWaypoints_Response *>(message_memory);
  typed_message->~GetWaypoints_Response();
}

size_t size_function__GetWaypoints_Response__waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<take_picture_interfaces::msg::WaypointList> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetWaypoints_Response__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<take_picture_interfaces::msg::WaypointList> *>(untyped_member);
  return &member[index];
}

void * get_function__GetWaypoints_Response__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<take_picture_interfaces::msg::WaypointList> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetWaypoints_Response__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const take_picture_interfaces::msg::WaypointList *>(
    get_const_function__GetWaypoints_Response__waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<take_picture_interfaces::msg::WaypointList *>(untyped_value);
  value = item;
}

void assign_function__GetWaypoints_Response__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<take_picture_interfaces::msg::WaypointList *>(
    get_function__GetWaypoints_Response__waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const take_picture_interfaces::msg::WaypointList *>(untyped_value);
  item = value;
}

void resize_function__GetWaypoints_Response__waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<take_picture_interfaces::msg::WaypointList> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetWaypoints_Response_message_member_array[1] = {
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<take_picture_interfaces::msg::WaypointList>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces::srv::GetWaypoints_Response, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetWaypoints_Response__waypoints,  // size() function pointer
    get_const_function__GetWaypoints_Response__waypoints,  // get_const(index) function pointer
    get_function__GetWaypoints_Response__waypoints,  // get(index) function pointer
    fetch_function__GetWaypoints_Response__waypoints,  // fetch(index, &value) function pointer
    assign_function__GetWaypoints_Response__waypoints,  // assign(index, value) function pointer
    resize_function__GetWaypoints_Response__waypoints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetWaypoints_Response_message_members = {
  "take_picture_interfaces::srv",  // message namespace
  "GetWaypoints_Response",  // message name
  1,  // number of fields
  sizeof(take_picture_interfaces::srv::GetWaypoints_Response),
  GetWaypoints_Response_message_member_array,  // message members
  GetWaypoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWaypoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetWaypoints_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetWaypoints_Response_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace take_picture_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Response>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints_Response)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetWaypoints_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) take_picture_interfaces::srv::GetWaypoints_Event(_init);
}

void GetWaypoints_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<take_picture_interfaces::srv::GetWaypoints_Event *>(message_memory);
  typed_message->~GetWaypoints_Event();
}

size_t size_function__GetWaypoints_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<take_picture_interfaces::srv::GetWaypoints_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetWaypoints_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<take_picture_interfaces::srv::GetWaypoints_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetWaypoints_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<take_picture_interfaces::srv::GetWaypoints_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetWaypoints_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const take_picture_interfaces::srv::GetWaypoints_Request *>(
    get_const_function__GetWaypoints_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<take_picture_interfaces::srv::GetWaypoints_Request *>(untyped_value);
  value = item;
}

void assign_function__GetWaypoints_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<take_picture_interfaces::srv::GetWaypoints_Request *>(
    get_function__GetWaypoints_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const take_picture_interfaces::srv::GetWaypoints_Request *>(untyped_value);
  item = value;
}

void resize_function__GetWaypoints_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<take_picture_interfaces::srv::GetWaypoints_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetWaypoints_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<take_picture_interfaces::srv::GetWaypoints_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetWaypoints_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<take_picture_interfaces::srv::GetWaypoints_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetWaypoints_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<take_picture_interfaces::srv::GetWaypoints_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetWaypoints_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const take_picture_interfaces::srv::GetWaypoints_Response *>(
    get_const_function__GetWaypoints_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<take_picture_interfaces::srv::GetWaypoints_Response *>(untyped_value);
  value = item;
}

void assign_function__GetWaypoints_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<take_picture_interfaces::srv::GetWaypoints_Response *>(
    get_function__GetWaypoints_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const take_picture_interfaces::srv::GetWaypoints_Response *>(untyped_value);
  item = value;
}

void resize_function__GetWaypoints_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<take_picture_interfaces::srv::GetWaypoints_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetWaypoints_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(take_picture_interfaces::srv::GetWaypoints_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(take_picture_interfaces::srv::GetWaypoints_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetWaypoints_Event__request,  // size() function pointer
    get_const_function__GetWaypoints_Event__request,  // get_const(index) function pointer
    get_function__GetWaypoints_Event__request,  // get(index) function pointer
    fetch_function__GetWaypoints_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetWaypoints_Event__request,  // assign(index, value) function pointer
    resize_function__GetWaypoints_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(take_picture_interfaces::srv::GetWaypoints_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetWaypoints_Event__response,  // size() function pointer
    get_const_function__GetWaypoints_Event__response,  // get_const(index) function pointer
    get_function__GetWaypoints_Event__response,  // get(index) function pointer
    fetch_function__GetWaypoints_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetWaypoints_Event__response,  // assign(index, value) function pointer
    resize_function__GetWaypoints_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetWaypoints_Event_message_members = {
  "take_picture_interfaces::srv",  // message namespace
  "GetWaypoints_Event",  // message name
  3,  // number of fields
  sizeof(take_picture_interfaces::srv::GetWaypoints_Event),
  GetWaypoints_Event_message_member_array,  // message members
  GetWaypoints_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetWaypoints_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetWaypoints_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetWaypoints_Event_message_members,
  get_message_typesupport_handle_function,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace take_picture_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Event>()
{
  return &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints_Event)() {
  return &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__functions.h"
// already included above
// #include "take_picture_interfaces/srv/detail/get_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace take_picture_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetWaypoints_service_members = {
  "take_picture_interfaces::srv",  // service namespace
  "GetWaypoints",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<take_picture_interfaces::srv::GetWaypoints>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetWaypoints_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetWaypoints_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<take_picture_interfaces::srv::GetWaypoints_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<take_picture_interfaces::srv::GetWaypoints>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<take_picture_interfaces::srv::GetWaypoints>,
  &take_picture_interfaces__srv__GetWaypoints__get_type_hash,
  &take_picture_interfaces__srv__GetWaypoints__get_type_description,
  &take_picture_interfaces__srv__GetWaypoints__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace take_picture_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<take_picture_interfaces::srv::GetWaypoints>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::take_picture_interfaces::srv::rosidl_typesupport_introspection_cpp::GetWaypoints_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::take_picture_interfaces::srv::GetWaypoints_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::take_picture_interfaces::srv::GetWaypoints_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::take_picture_interfaces::srv::GetWaypoints_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, take_picture_interfaces, srv, GetWaypoints)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<take_picture_interfaces::srv::GetWaypoints>();
}

#ifdef __cplusplus
}
#endif
