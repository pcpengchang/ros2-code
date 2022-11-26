// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_ARMORS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_ARMORS__BUILDER_HPP_

#include "interfaces/msg/detail/debug_armors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_DebugArmors_data
{
public:
  Init_DebugArmors_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::DebugArmors data(::interfaces::msg::DebugArmors::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::DebugArmors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::DebugArmors>()
{
  return interfaces::msg::builder::Init_DebugArmors_data();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DEBUG_ARMORS__BUILDER_HPP_
