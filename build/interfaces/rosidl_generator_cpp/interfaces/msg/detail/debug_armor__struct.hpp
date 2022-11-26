// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_ARMOR__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_ARMOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__DebugArmor __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__DebugArmor __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugArmor_
{
  using Type = DebugArmor_<ContainerAllocator>;

  explicit DebugArmor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_x = 0l;
      this->is_armor = false;
      this->light_ratio = 0.0f;
      this->center_distance = 0.0f;
      this->angle = 0.0f;
      this->armor_type = false;
    }
  }

  explicit DebugArmor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->center_x = 0l;
      this->is_armor = false;
      this->light_ratio = 0.0f;
      this->center_distance = 0.0f;
      this->angle = 0.0f;
      this->armor_type = false;
    }
  }

  // field types and members
  using _center_x_type =
    int32_t;
  _center_x_type center_x;
  using _is_armor_type =
    bool;
  _is_armor_type is_armor;
  using _light_ratio_type =
    float;
  _light_ratio_type light_ratio;
  using _center_distance_type =
    float;
  _center_distance_type center_distance;
  using _angle_type =
    float;
  _angle_type angle;
  using _armor_type_type =
    bool;
  _armor_type_type armor_type;

  // setters for named parameter idiom
  Type & set__center_x(
    const int32_t & _arg)
  {
    this->center_x = _arg;
    return *this;
  }
  Type & set__is_armor(
    const bool & _arg)
  {
    this->is_armor = _arg;
    return *this;
  }
  Type & set__light_ratio(
    const float & _arg)
  {
    this->light_ratio = _arg;
    return *this;
  }
  Type & set__center_distance(
    const float & _arg)
  {
    this->center_distance = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__armor_type(
    const bool & _arg)
  {
    this->armor_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::DebugArmor_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::DebugArmor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::DebugArmor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::DebugArmor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::DebugArmor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::DebugArmor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::DebugArmor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::DebugArmor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::DebugArmor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::DebugArmor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__DebugArmor
    std::shared_ptr<interfaces::msg::DebugArmor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__DebugArmor
    std::shared_ptr<interfaces::msg::DebugArmor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugArmor_ & other) const
  {
    if (this->center_x != other.center_x) {
      return false;
    }
    if (this->is_armor != other.is_armor) {
      return false;
    }
    if (this->light_ratio != other.light_ratio) {
      return false;
    }
    if (this->center_distance != other.center_distance) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->armor_type != other.armor_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugArmor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugArmor_

// alias to use template instance with default allocator
using DebugArmor =
  interfaces::msg::DebugArmor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DEBUG_ARMOR__STRUCT_HPP_
