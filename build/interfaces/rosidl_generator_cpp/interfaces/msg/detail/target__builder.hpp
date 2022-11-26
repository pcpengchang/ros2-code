// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_

#include "interfaces/msg/detail/target__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Target_velocity
{
public:
  explicit Init_Target_velocity(::interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Target velocity(::interfaces::msg::Target::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Target msg_;
};

class Init_Target_position
{
public:
  explicit Init_Target_position(::interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_velocity position(::interfaces::msg::Target::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Target_velocity(msg_);
  }

private:
  ::interfaces::msg::Target msg_;
};

class Init_Target_suggest_fire
{
public:
  explicit Init_Target_suggest_fire(::interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_position suggest_fire(::interfaces::msg::Target::_suggest_fire_type arg)
  {
    msg_.suggest_fire = std::move(arg);
    return Init_Target_position(msg_);
  }

private:
  ::interfaces::msg::Target msg_;
};

class Init_Target_tracking
{
public:
  explicit Init_Target_tracking(::interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_suggest_fire tracking(::interfaces::msg::Target::_tracking_type arg)
  {
    msg_.tracking = std::move(arg);
    return Init_Target_suggest_fire(msg_);
  }

private:
  ::interfaces::msg::Target msg_;
};

class Init_Target_id
{
public:
  explicit Init_Target_id(::interfaces::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_tracking id(::interfaces::msg::Target::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Target_tracking(msg_);
  }

private:
  ::interfaces::msg::Target msg_;
};

class Init_Target_header
{
public:
  Init_Target_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_id header(::interfaces::msg::Target::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Target_id(msg_);
  }

private:
  ::interfaces::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Target>()
{
  return interfaces::msg::builder::Init_Target_header();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TARGET__BUILDER_HPP_
