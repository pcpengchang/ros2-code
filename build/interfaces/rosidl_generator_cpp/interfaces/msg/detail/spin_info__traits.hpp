// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/SpinInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SPIN_INFO__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__SPIN_INFO__TRAITS_HPP_

#include "interfaces/msg/detail/spin_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::SpinInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: target_spinning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_spinning: ";
    value_to_yaml(msg.target_spinning, out);
    out << "\n";
  }

  // member: suggest_fire
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suggest_fire: ";
    value_to_yaml(msg.suggest_fire, out);
    out << "\n";
  }

  // member: jump_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jump_count: ";
    value_to_yaml(msg.jump_count, out);
    out << "\n";
  }

  // member: yaw_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_diff: ";
    value_to_yaml(msg.yaw_diff, out);
    out << "\n";
  }

  // member: jump_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jump_period: ";
    value_to_yaml(msg.jump_period, out);
    out << "\n";
  }

  // member: time_after_jumping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_after_jumping: ";
    value_to_yaml(msg.time_after_jumping, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::msg::SpinInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::SpinInfo>()
{
  return "interfaces::msg::SpinInfo";
}

template<>
inline const char * name<interfaces::msg::SpinInfo>()
{
  return "interfaces/msg/SpinInfo";
}

template<>
struct has_fixed_size<interfaces::msg::SpinInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<interfaces::msg::SpinInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<interfaces::msg::SpinInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__SPIN_INFO__TRAITS_HPP_
