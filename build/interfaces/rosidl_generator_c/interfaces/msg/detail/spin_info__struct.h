// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/SpinInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SPIN_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__SPIN_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/SpinInfo in the package interfaces.
typedef struct interfaces__msg__SpinInfo
{
  std_msgs__msg__Header header;
  bool target_spinning;
  bool suggest_fire;
  int64_t jump_count;
  double yaw_diff;
  double jump_period;
  double time_after_jumping;
} interfaces__msg__SpinInfo;

// Struct for a sequence of interfaces__msg__SpinInfo.
typedef struct interfaces__msg__SpinInfo__Sequence
{
  interfaces__msg__SpinInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__SpinInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__SPIN_INFO__STRUCT_H_
