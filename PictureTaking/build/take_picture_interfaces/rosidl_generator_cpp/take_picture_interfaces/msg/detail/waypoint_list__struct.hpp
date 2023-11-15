// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from take_picture_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_HPP_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "take_picture_interfaces/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__take_picture_interfaces__msg__WaypointList __attribute__((deprecated))
#else
# define DEPRECATED__take_picture_interfaces__msg__WaypointList __declspec(deprecated)
#endif

namespace take_picture_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointList_
{
  using Type = WaypointList_<ContainerAllocator>;

  explicit WaypointList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WaypointList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _waypoints_type =
    std::vector<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__waypoints(
    const std::vector<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    take_picture_interfaces::msg::WaypointList_<ContainerAllocator> *;
  using ConstRawPtr =
    const take_picture_interfaces::msg::WaypointList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__take_picture_interfaces__msg__WaypointList
    std::shared_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__take_picture_interfaces__msg__WaypointList
    std::shared_ptr<take_picture_interfaces::msg::WaypointList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointList_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointList_

// alias to use template instance with default allocator
using WaypointList =
  take_picture_interfaces::msg::WaypointList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace take_picture_interfaces

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_HPP_
