// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/SpinInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SPIN_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SPIN_INFO__BUILDER_HPP_

#include "interfaces/msg/detail/spin_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_SpinInfo_time_after_jumping
{
public:
  explicit Init_SpinInfo_time_after_jumping(::interfaces::msg::SpinInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::SpinInfo time_after_jumping(::interfaces::msg::SpinInfo::_time_after_jumping_type arg)
  {
    msg_.time_after_jumping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

class Init_SpinInfo_jump_period
{
public:
  explicit Init_SpinInfo_jump_period(::interfaces::msg::SpinInfo & msg)
  : msg_(msg)
  {}
  Init_SpinInfo_time_after_jumping jump_period(::interfaces::msg::SpinInfo::_jump_period_type arg)
  {
    msg_.jump_period = std::move(arg);
    return Init_SpinInfo_time_after_jumping(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

class Init_SpinInfo_yaw_diff
{
public:
  explicit Init_SpinInfo_yaw_diff(::interfaces::msg::SpinInfo & msg)
  : msg_(msg)
  {}
  Init_SpinInfo_jump_period yaw_diff(::interfaces::msg::SpinInfo::_yaw_diff_type arg)
  {
    msg_.yaw_diff = std::move(arg);
    return Init_SpinInfo_jump_period(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

class Init_SpinInfo_jump_count
{
public:
  explicit Init_SpinInfo_jump_count(::interfaces::msg::SpinInfo & msg)
  : msg_(msg)
  {}
  Init_SpinInfo_yaw_diff jump_count(::interfaces::msg::SpinInfo::_jump_count_type arg)
  {
    msg_.jump_count = std::move(arg);
    return Init_SpinInfo_yaw_diff(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

class Init_SpinInfo_suggest_fire
{
public:
  explicit Init_SpinInfo_suggest_fire(::interfaces::msg::SpinInfo & msg)
  : msg_(msg)
  {}
  Init_SpinInfo_jump_count suggest_fire(::interfaces::msg::SpinInfo::_suggest_fire_type arg)
  {
    msg_.suggest_fire = std::move(arg);
    return Init_SpinInfo_jump_count(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

class Init_SpinInfo_target_spinning
{
public:
  explicit Init_SpinInfo_target_spinning(::interfaces::msg::SpinInfo & msg)
  : msg_(msg)
  {}
  Init_SpinInfo_suggest_fire target_spinning(::interfaces::msg::SpinInfo::_target_spinning_type arg)
  {
    msg_.target_spinning = std::move(arg);
    return Init_SpinInfo_suggest_fire(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

class Init_SpinInfo_header
{
public:
  Init_SpinInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpinInfo_target_spinning header(::interfaces::msg::SpinInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpinInfo_target_spinning(msg_);
  }

private:
  ::interfaces::msg::SpinInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::SpinInfo>()
{
  return interfaces::msg::builder::Init_SpinInfo_header();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SPIN_INFO__BUILDER_HPP_
