// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/debug_lights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "interfaces/msg/detail/debug_light__functions.h"

bool
interfaces__msg__DebugLights__init(interfaces__msg__DebugLights * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!interfaces__msg__DebugLight__Sequence__init(&msg->data, 0)) {
    interfaces__msg__DebugLights__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__DebugLights__fini(interfaces__msg__DebugLights * msg)
{
  if (!msg) {
    return;
  }
  // data
  interfaces__msg__DebugLight__Sequence__fini(&msg->data);
}

bool
interfaces__msg__DebugLights__are_equal(const interfaces__msg__DebugLights * lhs, const interfaces__msg__DebugLights * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!interfaces__msg__DebugLight__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__DebugLights__copy(
  const interfaces__msg__DebugLights * input,
  interfaces__msg__DebugLights * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!interfaces__msg__DebugLight__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

interfaces__msg__DebugLights *
interfaces__msg__DebugLights__create()
{
  interfaces__msg__DebugLights * msg = (interfaces__msg__DebugLights *)malloc(sizeof(interfaces__msg__DebugLights));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__DebugLights));
  bool success = interfaces__msg__DebugLights__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__DebugLights__destroy(interfaces__msg__DebugLights * msg)
{
  if (msg) {
    interfaces__msg__DebugLights__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__DebugLights__Sequence__init(interfaces__msg__DebugLights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__DebugLights * data = NULL;
  if (size) {
    data = (interfaces__msg__DebugLights *)calloc(size, sizeof(interfaces__msg__DebugLights));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__DebugLights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__DebugLights__fini(&data[i - 1]);
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
interfaces__msg__DebugLights__Sequence__fini(interfaces__msg__DebugLights__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__DebugLights__fini(&array->data[i]);
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

interfaces__msg__DebugLights__Sequence *
interfaces__msg__DebugLights__Sequence__create(size_t size)
{
  interfaces__msg__DebugLights__Sequence * array = (interfaces__msg__DebugLights__Sequence *)malloc(sizeof(interfaces__msg__DebugLights__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__DebugLights__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__DebugLights__Sequence__destroy(interfaces__msg__DebugLights__Sequence * array)
{
  if (array) {
    interfaces__msg__DebugLights__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__DebugLights__Sequence__are_equal(const interfaces__msg__DebugLights__Sequence * lhs, const interfaces__msg__DebugLights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__DebugLights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__DebugLights__Sequence__copy(
  const interfaces__msg__DebugLights__Sequence * input,
  interfaces__msg__DebugLights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__DebugLights);
    interfaces__msg__DebugLights * data =
      (interfaces__msg__DebugLights *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__DebugLights__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__DebugLights__fini(&data[i]);
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
    if (!interfaces__msg__DebugLights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
