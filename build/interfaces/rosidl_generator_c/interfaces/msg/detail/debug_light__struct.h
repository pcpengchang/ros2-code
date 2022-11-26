// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DEBUG_LIGHT__STRUCT_H_
#define INTERFACES__MSG__DETAIL__DEBUG_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DebugLight in the package interfaces.
typedef struct interfaces__msg__DebugLight
{
  int32_t center_x;
  bool is_light;
  float ratio;
  float angle;
} interfaces__msg__DebugLight;

// Struct for a sequence of interfaces__msg__DebugLight.
typedef struct interfaces__msg__DebugLight__Sequence
{
  interfaces__msg__DebugLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__DebugLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__DEBUG_LIGHT__STRUCT_H_
