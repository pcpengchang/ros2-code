// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_ARMORS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__DEBUG_ARMORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "interfaces/msg/detail/debug_armor__struct.h"

// Struct defined in msg/DebugArmors in the package interfaces.
typedef struct interfaces__msg__DebugArmors
{
  interfaces__msg__DebugArmor__Sequence data;
} interfaces__msg__DebugArmors;

// Struct for a sequence of interfaces__msg__DebugArmors.
typedef struct interfaces__msg__DebugArmors__Sequence
{
  interfaces__msg__DebugArmors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__DebugArmors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__DEBUG_ARMORS__STRUCT_H_
