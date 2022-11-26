// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/debug_armor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interfaces__msg__DebugArmor__init(interfaces__msg__DebugArmor * msg)
{
  if (!msg) {
    return false;
  }
  // center_x
  // is_armor
  // light_ratio
  // center_distance
  // angle
  // armor_type
  return true;
}

void
interfaces__msg__DebugArmor__fini(interfaces__msg__DebugArmor * msg)
{
  if (!msg) {
    return;
  }
  // center_x
  // is_armor
  // light_ratio
  // center_distance
  // angle
  // armor_type
}

bool
interfaces__msg__DebugArmor__are_equal(const interfaces__msg__DebugArmor * lhs, const interfaces__msg__DebugArmor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center_x
  if (lhs->center_x != rhs->center_x) {
    return false;
  }
  // is_armor
  if (lhs->is_armor != rhs->is_armor) {
    return false;
  }
  // light_ratio
  if (lhs->light_ratio != rhs->light_ratio) {
    return false;
  }
  // center_distance
  if (lhs->center_distance != rhs->center_distance) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // armor_type
  if (lhs->armor_type != rhs->armor_type) {
    return false;
  }
  return true;
}

bool
interfaces__msg__DebugArmor__copy(
  const interfaces__msg__DebugArmor * input,
  interfaces__msg__DebugArmor * output)
{
  if (!input || !output) {
    return false;
  }
  // center_x
  output->center_x = input->center_x;
  // is_armor
  output->is_armor = input->is_armor;
  // light_ratio
  output->light_ratio = input->light_ratio;
  // center_distance
  output->center_distance = input->center_distance;
  // angle
  output->angle = input->angle;
  // armor_type
  output->armor_type = input->armor_type;
  return true;
}

interfaces__msg__DebugArmor *
interfaces__msg__DebugArmor__create()
{
  interfaces__msg__DebugArmor * msg = (interfaces__msg__DebugArmor *)malloc(sizeof(interfaces__msg__DebugArmor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__DebugArmor));
  bool success = interfaces__msg__DebugArmor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__DebugArmor__destroy(interfaces__msg__DebugArmor * msg)
{
  if (msg) {
    interfaces__msg__DebugArmor__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__DebugArmor__Sequence__init(interfaces__msg__DebugArmor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__DebugArmor * data = NULL;
  if (size) {
    data = (interfaces__msg__DebugArmor *)calloc(size, sizeof(interfaces__msg__DebugArmor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__DebugArmor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__DebugArmor__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__DebugArmor__Sequence__fini(interfaces__msg__DebugArmor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__DebugArmor__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__DebugArmor__Sequence *
interfaces__msg__DebugArmor__Sequence__create(size_t size)
{
  interfaces__msg__DebugArmor__Sequence * array = (interfaces__msg__DebugArmor__Sequence *)malloc(sizeof(interfaces__msg__DebugArmor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__DebugArmor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__DebugArmor__Sequence__destroy(interfaces__msg__DebugArmor__Sequence * array)
{
  if (array) {
    interfaces__msg__DebugArmor__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__DebugArmor__Sequence__are_equal(const interfaces__msg__DebugArmor__Sequence * lhs, const interfaces__msg__DebugArmor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__DebugArmor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__DebugArmor__Sequence__copy(
  const interfaces__msg__DebugArmor__Sequence * input,
  interfaces__msg__DebugArmor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__DebugArmor);
    interfaces__msg__DebugArmor * data =
      (interfaces__msg__DebugArmor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__DebugArmor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__DebugArmor__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__DebugArmor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
