// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_LIGHT__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_LIGHT__TRAITS_HPP_

#include "interfaces/msg/detail/debug_light__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::DebugLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_x: ";
    value_to_yaml(msg.center_x, out);
    out << "\n";
  }

  // member: is_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_light: ";
    value_to_yaml(msg.is_light, out);
    out << "\n";
  }

  // member: ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ratio: ";
    value_to_yaml(msg.ratio, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::msg::DebugLight & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::DebugLight>()
{
  return "interfaces::msg::DebugLight";
}

template<>
inline const char * name<interfaces::msg::DebugLight>()
{
  return "interfaces/msg/DebugLight";
}

template<>
struct has_fixed_size<interfaces::msg::DebugLight>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::DebugLight>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::DebugLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__DEBUG_LIGHT__TRAITS_HPP_
