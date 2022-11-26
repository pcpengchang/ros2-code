// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ARMOR__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__ARMOR__TRAITS_HPP_

#include "interfaces/msg/detail/armor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::Armor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: distance_to_image_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_image_center: ";
    value_to_yaml(msg.distance_to_image_center, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::msg::Armor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::Armor>()
{
  return "interfaces::msg::Armor";
}

template<>
inline const char * name<interfaces::msg::Armor>()
{
  return "interfaces/msg/Armor";
}

template<>
struct has_fixed_size<interfaces::msg::Armor>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<interfaces::msg::Armor>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<interfaces::msg::Armor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__ARMOR__TRAITS_HPP_
