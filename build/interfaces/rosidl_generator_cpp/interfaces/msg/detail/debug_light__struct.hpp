// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_LIGHT__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_LIGHT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__DebugLight __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__DebugLight __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugLight_
{
  using Type = DebugLight_<ContainerAllocator>;

  explicit DebugLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_x = 0l;
      this->is_light = false;
      this->ratio = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit DebugLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_x = 0l;
      this->is_light = false;
      this->ratio = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _center_x_type =
    int32_t;
  _center_x_type center_x;
  using _is_light_type =
    bool;
  _is_light_type is_light;
  using _ratio_type =
    float;
  _ratio_type ratio;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__center_x(
    const int32_t & _arg)
  {
    this->center_x = _arg;
    return *this;
  }
  Type & set__is_light(
    const bool & _arg)
  {
    this->is_light = _arg;
    return *this;
  }
  Type & set__ratio(
    const float & _arg)
  {
    this->ratio = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::DebugLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::DebugLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::DebugLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::DebugLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::DebugLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::DebugLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::DebugLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::DebugLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::DebugLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::DebugLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__DebugLight
    std::shared_ptr<interfaces::msg::DebugLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__DebugLight
    std::shared_ptr<interfaces::msg::DebugLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugLight_ & other) const
  {
    if (this->center_x != other.center_x) {
      return false;
    }
    if (this->is_light != other.is_light) {
      return false;
    }
    if (this->ratio != other.ratio) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugLight_

// alias to use template instance with default allocator
using DebugLight =
  interfaces::msg::DebugLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DEBUG_LIGHT__STRUCT_HPP_
