// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ARMORS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ARMORS__BUILDER_HPP_

#include "interfaces/msg/detail/armors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Armors_armors
{
public:
  explicit Init_Armors_armors(::interfaces::msg::Armors & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Armors armors(::interfaces::msg::Armors::_armors_type arg)
  {
    msg_.armors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Armors msg_;
};

class Init_Armors_header
{
public:
  Init_Armors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armors_armors header(::interfaces::msg::Armors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Armors_armors(msg_);
  }

private:
  ::interfaces::msg::Armors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Armors>()
{
  return interfaces::msg::builder::Init_Armors_header();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ARMORS__BUILDER_HPP_
