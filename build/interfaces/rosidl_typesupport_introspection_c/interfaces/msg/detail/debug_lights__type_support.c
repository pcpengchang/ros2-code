// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/debug_lights__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/debug_lights__functions.h"
#include "interfaces/msg/detail/debug_lights__struct.h"


// Include directives for member types
// Member `data`
#include "interfaces/msg/debug_light.h"
// Member `data`
#include "interfaces/msg/detail/debug_light__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DebugLights__rosidl_typesupport_introspection_c__DebugLights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__DebugLights__init(message_memory);
}

void DebugLights__rosidl_typesupport_introspection_c__DebugLights_fini_function(void * message_memory)
{
  interfaces__msg__DebugLights__fini(message_memory);
}

size_t DebugLights__rosidl_typesupport_introspection_c__size_function__DebugLight__data(
  const void * untyped_member)
{
  const interfaces__msg__DebugLight__Sequence * member =
    (const interfaces__msg__DebugLight__Sequence *)(untyped_member);
  return member->size;
}

const void * DebugLights__rosidl_typesupport_introspection_c__get_const_function__DebugLight__data(
  const void * untyped_member, size_t index)
{
  const interfaces__msg__DebugLight__Sequence * member =
    (const interfaces__msg__DebugLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DebugLights__rosidl_typesupport_introspection_c__get_function__DebugLight__data(
  void * untyped_member, size_t index)
{
  interfaces__msg__DebugLight__Sequence * member =
    (interfaces__msg__DebugLight__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DebugLights__rosidl_typesupport_introspection_c__resize_function__DebugLight__data(
  void * untyped_member, size_t size)
{
  interfaces__msg__DebugLight__Sequence * member =
    (interfaces__msg__DebugLight__Sequence *)(untyped_member);
  interfaces__msg__DebugLight__Sequence__fini(member);
  return interfaces__msg__DebugLight__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__DebugLights, data),  // bytes offset in struct
    NULL,  // default value
    DebugLights__rosidl_typesupport_introspection_c__size_function__DebugLight__data,  // size() function pointer
    DebugLights__rosidl_typesupport_introspection_c__get_const_function__DebugLight__data,  // get_const(index) function pointer
    DebugLights__rosidl_typesupport_introspection_c__get_function__DebugLight__data,  // get(index) function pointer
    DebugLights__rosidl_typesupport_introspection_c__resize_function__DebugLight__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_members = {
  "interfaces__msg",  // message namespace
  "DebugLights",  // message name
  1,  // number of fields
  sizeof(interfaces__msg__DebugLights),
  DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_member_array,  // message members
  DebugLights__rosidl_typesupport_introspection_c__DebugLights_init_function,  // function to initialize message memory (memory has to be allocated)
  DebugLights__rosidl_typesupport_introspection_c__DebugLights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle = {
  0,
  &DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, DebugLights)() {
  DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, DebugLight)();
  if (!DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle.typesupport_identifier) {
    DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
