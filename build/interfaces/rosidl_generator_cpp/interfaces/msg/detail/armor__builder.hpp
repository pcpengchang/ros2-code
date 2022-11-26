// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ARMOR__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ARMOR__BUILDER_HPP_

#include "interfaces/msg/detail/armor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Armor_position
{
public:
  explicit Init_Armor_position(::interfaces::msg::Armor & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Armor position(::interfaces::msg::Armor::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Armor msg_;
};

class Init_Armor_distance_to_image_center
{
public:
  explicit Init_Armor_distance_to_image_center(::interfaces::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_position distance_to_image_center(::interfaces::msg::Armor::_distance_to_image_center_type arg)
  {
    msg_.distance_to_image_center = std::move(arg);
    return Init_Armor_position(msg_);
  }

private:
  ::interfaces::msg::Armor msg_;
};

class Init_Armor_number
{
public:
  Init_Armor_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armor_distance_to_image_center number(::interfaces::msg::Armor::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_Armor_distance_to_image_center(msg_);
  }

private:
  ::interfaces::msg::Armor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Armor>()
{
  return interfaces::msg::builder::Init_Armor_number();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ARMOR__BUILDER_HPP_
