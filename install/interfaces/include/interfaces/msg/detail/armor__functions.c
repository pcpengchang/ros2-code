// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Armor.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/armor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
interfaces__msg__Armor__init(interfaces__msg__Armor * msg)
{
  if (!msg) {
    return false;
  }
  // number
  // distance_to_image_center
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    interfaces__msg__Armor__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Armor__fini(interfaces__msg__Armor * msg)
{
  if (!msg) {
    return;
  }
  // number
  // distance_to_image_center
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
interfaces__msg__Armor__are_equal(const interfaces__msg__Armor * lhs, const interfaces__msg__Armor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // distance_to_image_center
  if (lhs->distance_to_image_center != rhs->distance_to_image_center) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__Armor__copy(
  const interfaces__msg__Armor * input,
  interfaces__msg__Armor * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  // distance_to_image_center
  output->distance_to_image_center = input->distance_to_image_center;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

interfaces__msg__Armor *
interfaces__msg__Armor__create()
{
  interfaces__msg__Armor * msg = (interfaces__msg__Armor *)malloc(sizeof(interfaces__msg__Armor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Armor));
  bool success = interfaces__msg__Armor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Armor__destroy(interfaces__msg__Armor * msg)
{
  if (msg) {
    interfaces__msg__Armor__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__Armor__Sequence__init(interfaces__msg__Armor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__Armor * data = NULL;
  if (size) {
    data = (interfaces__msg__Armor *)calloc(size, sizeof(interfaces__msg__Armor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Armor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Armor__fini(&data[i - 1]);
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
interfaces__msg__Armor__Sequence__fini(interfaces__msg__Armor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__Armor__fini(&array->data[i]);
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

interfaces__msg__Armor__Sequence *
interfaces__msg__Armor__Sequence__create(size_t size)
{
  interfaces__msg__Armor__Sequence * array = (interfaces__msg__Armor__Sequence *)malloc(sizeof(interfaces__msg__Armor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Armor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Armor__Sequence__destroy(interfaces__msg__Armor__Sequence * array)
{
  if (array) {
    interfaces__msg__Armor__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__Armor__Sequence__are_equal(const interfaces__msg__Armor__Sequence * lhs, const interfaces__msg__Armor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Armor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Armor__Sequence__copy(
  const interfaces__msg__Armor__Sequence * input,
  interfaces__msg__Armor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Armor);
    interfaces__msg__Armor * data =
      (interfaces__msg__Armor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Armor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__Armor__fini(&data[i]);
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
    if (!interfaces__msg__Armor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
