// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from take_picture_interfaces:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__STRUCT_HPP_
#define TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Request __declspec(deprecated)
#endif

namespace take_picture_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoints_Request_
{
  using Type = GetWaypoints_Request_<ContainerAllocator>;

  explicit GetWaypoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetWaypoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Request
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Request
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoints_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoints_Request_

// alias to use template instance with default allocator
using GetWaypoints_Request =
  take_picture_interfaces::srv::GetWaypoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace take_picture_interfaces


// Include directives for member types
// Member 'waypoints'
#include "take_picture_interfaces/msg/detail/waypoint_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Response __declspec(deprecated)
#endif

namespace take_picture_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoints_Response_
{
  using Type = GetWaypoints_Response_<ContainerAllocator>;

  explicit GetWaypoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetWaypoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _waypoints_type =
    std::vector<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__waypoints(
    const std::vector<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Response
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Response
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoints_Response_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoints_Response_

// alias to use template instance with default allocator
using GetWaypoints_Response =
  take_picture_interfaces::srv::GetWaypoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace take_picture_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Event __attribute__((deprecated))
#else
# define DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Event __declspec(deprecated)
#endif

namespace take_picture_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWaypoints_Event_
{
  using Type = GetWaypoints_Event_<ContainerAllocator>;

  explicit GetWaypoints_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetWaypoints_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::srv::GetWaypoints_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::srv::GetWaypoints_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Event
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__take_picture_interfaces__srv__GetWaypoints_Event
    std::shared_ptr<take_picture_interfaces::srv::GetWaypoints_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWaypoints_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWaypoints_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWaypoints_Event_

// alias to use template instance with default allocator
using GetWaypoints_Event =
  take_picture_interfaces::srv::GetWaypoints_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace take_picture_interfaces

namespace take_picture_interfaces
{

namespace srv
{

struct GetWaypoints
{
  using Request = take_picture_interfaces::srv::GetWaypoints_Request;
  using Response = take_picture_interfaces::srv::GetWaypoints_Response;
  using Event = take_picture_interfaces::srv::GetWaypoints_Event;
};

}  // namespace srv

}  // namespace take_picture_interfaces

#endif  // TAKE_PICTURE_INTERFACES__SRV__DETAIL__GET_WAYPOINTS__STRUCT_HPP_
