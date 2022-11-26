// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/debug_armors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "interfaces/msg/detail/debug_armor__functions.h"

bool
interfaces__msg__DebugArmors__init(interfaces__msg__DebugArmors * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!interfaces__msg__DebugArmor__Sequence__init(&msg->data, 0)) {
    interfaces__msg__DebugArmors__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__DebugArmors__fini(interfaces__msg__DebugArmors * msg)
{
  if (!msg) {
    return;
  }
  // data
  interfaces__msg__DebugArmor__Sequence__fini(&msg->data);
}

bool
interfaces__msg__DebugArmors__are_equal(const interfaces__msg__DebugArmors * lhs, const interfaces__msg__DebugArmors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!interfaces__msg__DebugArmor__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__DebugArmors__copy(
  const interfaces__msg__DebugArmors * input,
  interfaces__msg__DebugArmors * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!interfaces__msg__DebugArmor__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

interfaces__msg__DebugArmors *
interfaces__msg__DebugArmors__create()
{
  interfaces__msg__DebugArmors * msg = (interfaces__msg__DebugArmors *)malloc(sizeof(interfaces__msg__DebugArmors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__DebugArmors));
  bool success = interfaces__msg__DebugArmors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__DebugArmors__destroy(interfaces__msg__DebugArmors * msg)
{
  if (msg) {
    interfaces__msg__DebugArmors__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__DebugArmors__Sequence__init(interfaces__msg__DebugArmors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__DebugArmors * data = NULL;
  if (size) {
    data = (interfaces__msg__DebugArmors *)calloc(size, sizeof(interfaces__msg__DebugArmors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__DebugArmors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__DebugArmors__fini(&data[i - 1]);
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
interfaces__msg__DebugArmors__Sequence__fini(interfaces__msg__DebugArmors__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__DebugArmors__fini(&array->data[i]);
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

interfaces__msg__DebugArmors__Sequence *
interfaces__msg__DebugArmors__Sequence__create(size_t size)
{
  interfaces__msg__DebugArmors__Sequence * array = (interfaces__msg__DebugArmors__Sequence *)malloc(sizeof(interfaces__msg__DebugArmors__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__DebugArmors__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__DebugArmors__Sequence__destroy(interfaces__msg__DebugArmors__Sequence * array)
{
  if (array) {
    interfaces__msg__DebugArmors__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__DebugArmors__Sequence__are_equal(const interfaces__msg__DebugArmors__Sequence * lhs, const interfaces__msg__DebugArmors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__DebugArmors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__DebugArmors__Sequence__copy(
  const interfaces__msg__DebugArmors__Sequence * input,
  interfaces__msg__DebugArmors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__DebugArmors);
    interfaces__msg__DebugArmors * data =
      (interfaces__msg__DebugArmors *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__DebugArmors__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__DebugArmors__fini(&data[i]);
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
    if (!interfaces__msg__DebugArmors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
