// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from take_picture_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__take_picture_interfaces__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__take_picture_interfaces__msg__Waypoint __declspec(deprecated)
#endif

namespace take_picture_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    take_picture_interfaces::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const take_picture_interfaces::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__take_picture_interfaces__msg__Waypoint
    std::shared_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__take_picture_interfaces__msg__Waypoint
    std::shared_ptr<take_picture_interfaces::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  take_picture_interfaces::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace take_picture_interfaces

#endif  // TAKE_PICTURE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
