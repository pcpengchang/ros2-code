// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_ARMORS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__DEBUG_ARMORS__TRAITS_HPP_

#include "interfaces/msg/detail/debug_armors__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "interfaces/msg/detail/debug_armor__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::DebugArmors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::msg::DebugArmors & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::DebugArmors>()
{
  return "interfaces::msg::DebugArmors";
}

template<>
inline const char * name<interfaces::msg::DebugArmors>()
{
  return "interfaces/msg/DebugArmors";
}

template<>
struct has_fixed_size<interfaces::msg::DebugArmors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::DebugArmors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::DebugArmors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__DEBUG_ARMORS__TRAITS_HPP_
