// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_ARMOR__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_ARMOR__TRAITS_HPP_

#include "interfaces/msg/detail/debug_armor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::DebugArmor & msg,
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

  // member: is_armor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_armor: ";
    value_to_yaml(msg.is_armor, out);
    out << "\n";
  }

  // member: light_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_ratio: ";
    value_to_yaml(msg.light_ratio, out);
    out << "\n";
  }

  // member: center_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_distance: ";
    value_to_yaml(msg.center_distance, out);
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

  // member: armor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_type: ";
    value_to_yaml(msg.armor_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::msg::DebugArmor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::DebugArmor>()
{
  return "interfaces::msg::DebugArmor";
}

template<>
inline const char * name<interfaces::msg::DebugArmor>()
{
  return "interfaces/msg/DebugArmor";
}

template<>
struct has_fixed_size<interfaces::msg::DebugArmor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::DebugArmor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::DebugArmor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__DEBUG_ARMOR__TRAITS_HPP_
