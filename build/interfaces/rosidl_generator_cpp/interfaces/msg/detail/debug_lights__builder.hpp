// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__BUILDER_HPP_

#include "interfaces/msg/detail/debug_lights__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_DebugLights_data
{
public:
  Init_DebugLights_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::DebugLights data(::interfaces::msg::DebugLights::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::DebugLights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::DebugLights>()
{
  return interfaces::msg::builder::Init_DebugLights_data();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__BUILDER_HPP_
