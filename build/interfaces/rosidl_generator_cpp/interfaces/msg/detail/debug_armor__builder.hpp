// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_ARMOR__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_ARMOR__BUILDER_HPP_

#include "interfaces/msg/detail/debug_armor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_DebugArmor_armor_type
{
public:
  explicit Init_DebugArmor_armor_type(::interfaces::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::DebugArmor armor_type(::interfaces::msg::DebugArmor::_armor_type_type arg)
  {
    msg_.armor_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::DebugArmor msg_;
};

class Init_DebugArmor_angle
{
public:
  explicit Init_DebugArmor_angle(::interfaces::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_armor_type angle(::interfaces::msg::DebugArmor::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_DebugArmor_armor_type(msg_);
  }

private:
  ::interfaces::msg::DebugArmor msg_;
};

class Init_DebugArmor_center_distance
{
public:
  explicit Init_DebugArmor_center_distance(::interfaces::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_angle center_distance(::interfaces::msg::DebugArmor::_center_distance_type arg)
  {
    msg_.center_distance = std::move(arg);
    return Init_DebugArmor_angle(msg_);
  }

private:
  ::interfaces::msg::DebugArmor msg_;
};

class Init_DebugArmor_light_ratio
{
public:
  explicit Init_DebugArmor_light_ratio(::interfaces::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_center_distance light_ratio(::interfaces::msg::DebugArmor::_light_ratio_type arg)
  {
    msg_.light_ratio = std::move(arg);
    return Init_DebugArmor_center_distance(msg_);
  }

private:
  ::interfaces::msg::DebugArmor msg_;
};

class Init_DebugArmor_is_armor
{
public:
  explicit Init_DebugArmor_is_armor(::interfaces::msg::DebugArmor & msg)
  : msg_(msg)
  {}
  Init_DebugArmor_light_ratio is_armor(::interfaces::msg::DebugArmor::_is_armor_type arg)
  {
    msg_.is_armor = std::move(arg);
    return Init_DebugArmor_light_ratio(msg_);
  }

private:
  ::interfaces::msg::DebugArmor msg_;
};

class Init_DebugArmor_center_x
{
public:
  Init_DebugArmor_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugArmor_is_armor center_x(::interfaces::msg::DebugArmor::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_DebugArmor_is_armor(msg_);
  }

private:
  ::interfaces::msg::DebugArmor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::DebugArmor>()
{
  return interfaces::msg::builder::Init_DebugArmor_center_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DEBUG_ARMOR__BUILDER_HPP_
