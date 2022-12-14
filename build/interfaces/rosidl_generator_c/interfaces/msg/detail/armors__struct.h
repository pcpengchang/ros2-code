// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ARMORS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ARMORS__STRUCT_H_

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
// Member 'armors'
#include "interfaces/msg/detail/armor__struct.h"

// Struct defined in msg/Armors in the package interfaces.
typedef struct interfaces__msg__Armors
{
  std_msgs__msg__Header header;
  interfaces__msg__Armor__Sequence armors;
} interfaces__msg__Armors;

// Struct for a sequence of interfaces__msg__Armors.
typedef struct interfaces__msg__Armors__Sequence
{
  interfaces__msg__Armors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Armors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ARMORS__STRUCT_H_
