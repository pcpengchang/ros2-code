// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/SpinInfo.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/spin_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
interfaces__msg__SpinInfo__init(interfaces__msg__SpinInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    interfaces__msg__SpinInfo__fini(msg);
    return false;
  }
  // target_spinning
  // suggest_fire
  // jump_count
  // yaw_diff
  // jump_period
  // time_after_jumping
  return true;
}

void
interfaces__msg__SpinInfo__fini(interfaces__msg__SpinInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_spinning
  // suggest_fire
  // jump_count
  // yaw_diff
  // jump_period
  // time_after_jumping
}

bool
interfaces__msg__SpinInfo__are_equal(const interfaces__msg__SpinInfo * lhs, const interfaces__msg__SpinInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // target_spinning
  if (lhs->target_spinning != rhs->target_spinning) {
    return false;
  }
  // suggest_fire
  if (lhs->suggest_fire != rhs->suggest_fire) {
    return false;
  }
  // jump_count
  if (lhs->jump_count != rhs->jump_count) {
    return false;
  }
  // yaw_diff
  if (lhs->yaw_diff != rhs->yaw_diff) {
    return false;
  }
  // jump_period
  if (lhs->jump_period != rhs->jump_period) {
    return false;
  }
  // time_after_jumping
  if (lhs->time_after_jumping != rhs->time_after_jumping) {
    return false;
  }
  return true;
}

bool
interfaces__msg__SpinInfo__copy(
  const interfaces__msg__SpinInfo * input,
  interfaces__msg__SpinInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // target_spinning
  output->target_spinning = input->target_spinning;
  // suggest_fire
  output->suggest_fire = input->suggest_fire;
  // jump_count
  output->jump_count = input->jump_count;
  // yaw_diff
  output->yaw_diff = input->yaw_diff;
  // jump_period
  output->jump_period = input->jump_period;
  // time_after_jumping
  output->time_after_jumping = input->time_after_jumping;
  return true;
}

interfaces__msg__SpinInfo *
interfaces__msg__SpinInfo__create()
{
  interfaces__msg__SpinInfo * msg = (interfaces__msg__SpinInfo *)malloc(sizeof(interfaces__msg__SpinInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__SpinInfo));
  bool success = interfaces__msg__SpinInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__SpinInfo__destroy(interfaces__msg__SpinInfo * msg)
{
  if (msg) {
    interfaces__msg__SpinInfo__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__SpinInfo__Sequence__init(interfaces__msg__SpinInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__SpinInfo * data = NULL;
  if (size) {
    data = (interfaces__msg__SpinInfo *)calloc(size, sizeof(interfaces__msg__SpinInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__SpinInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__SpinInfo__fini(&data[i - 1]);
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
interfaces__msg__SpinInfo__Sequence__fini(interfaces__msg__SpinInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__SpinInfo__fini(&array->data[i]);
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

interfaces__msg__SpinInfo__Sequence *
interfaces__msg__SpinInfo__Sequence__create(size_t size)
{
  interfaces__msg__SpinInfo__Sequence * array = (interfaces__msg__SpinInfo__Sequence *)malloc(sizeof(interfaces__msg__SpinInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__SpinInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__SpinInfo__Sequence__destroy(interfaces__msg__SpinInfo__Sequence * array)
{
  if (array) {
    interfaces__msg__SpinInfo__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__SpinInfo__Sequence__are_equal(const interfaces__msg__SpinInfo__Sequence * lhs, const interfaces__msg__SpinInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__SpinInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__SpinInfo__Sequence__copy(
  const interfaces__msg__SpinInfo__Sequence * input,
  interfaces__msg__SpinInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__SpinInfo);
    interfaces__msg__SpinInfo * data =
      (interfaces__msg__SpinInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__SpinInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__SpinInfo__fini(&data[i]);
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
    if (!interfaces__msg__SpinInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
