// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ARMOR__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ARMOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Armor in the package interfaces.
typedef struct interfaces__msg__Armor
{
  uint8_t number;
  float distance_to_image_center;
  geometry_msgs__msg__Point position;
} interfaces__msg__Armor;

// Struct for a sequence of interfaces__msg__Armor.
typedef struct interfaces__msg__Armor__Sequence
{
  interfaces__msg__Armor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Armor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ARMOR__STRUCT_H_
