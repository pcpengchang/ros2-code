// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/SpinInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SPIN_INFO__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__SPIN_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__SpinInfo __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__SpinInfo __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpinInfo_
{
  using Type = SpinInfo_<ContainerAllocator>;

  explicit SpinInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_spinning = false;
      this->suggest_fire = false;
      this->jump_count = 0ll;
      this->yaw_diff = 0.0;
      this->jump_period = 0.0;
      this->time_after_jumping = 0.0;
    }
  }

  explicit SpinInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_spinning = false;
      this->suggest_fire = false;
      this->jump_count = 0ll;
      this->yaw_diff = 0.0;
      this->jump_period = 0.0;
      this->time_after_jumping = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_spinning_type =
    bool;
  _target_spinning_type target_spinning;
  using _suggest_fire_type =
    bool;
  _suggest_fire_type suggest_fire;
  using _jump_count_type =
    int64_t;
  _jump_count_type jump_count;
  using _yaw_diff_type =
    double;
  _yaw_diff_type yaw_diff;
  using _jump_period_type =
    double;
  _jump_period_type jump_period;
  using _time_after_jumping_type =
    double;
  _time_after_jumping_type time_after_jumping;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_spinning(
    const bool & _arg)
  {
    this->target_spinning = _arg;
    return *this;
  }
  Type & set__suggest_fire(
    const bool & _arg)
  {
    this->suggest_fire = _arg;
    return *this;
  }
  Type & set__jump_count(
    const int64_t & _arg)
  {
    this->jump_count = _arg;
    return *this;
  }
  Type & set__yaw_diff(
    const double & _arg)
  {
    this->yaw_diff = _arg;
    return *this;
  }
  Type & set__jump_period(
    const double & _arg)
  {
    this->jump_period = _arg;
    return *this;
  }
  Type & set__time_after_jumping(
    const double & _arg)
  {
    this->time_after_jumping = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::SpinInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::SpinInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::SpinInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::SpinInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SpinInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SpinInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SpinInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SpinInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::SpinInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::SpinInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__SpinInfo
    std::shared_ptr<interfaces::msg::SpinInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__SpinInfo
    std::shared_ptr<interfaces::msg::SpinInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpinInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_spinning != other.target_spinning) {
      return false;
    }
    if (this->suggest_fire != other.suggest_fire) {
      return false;
    }
    if (this->jump_count != other.jump_count) {
      return false;
    }
    if (this->yaw_diff != other.yaw_diff) {
      return false;
    }
    if (this->jump_period != other.jump_period) {
      return false;
    }
    if (this->time_after_jumping != other.time_after_jumping) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpinInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpinInfo_

// alias to use template instance with default allocator
using SpinInfo =
  interfaces::msg::SpinInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SPIN_INFO__STRUCT_HPP_
