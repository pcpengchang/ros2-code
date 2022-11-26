// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/debug_armor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/debug_armor__struct.h"
#include "interfaces/msg/detail/debug_armor__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DebugArmor__ros_msg_type = interfaces__msg__DebugArmor;

static bool _DebugArmor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DebugArmor__ros_msg_type * ros_message = static_cast<const _DebugArmor__ros_msg_type *>(untyped_ros_message);
  // Field name: center_x
  {
    cdr << ros_message->center_x;
  }

  // Field name: is_armor
  {
    cdr << (ros_message->is_armor ? true : false);
  }

  // Field name: light_ratio
  {
    cdr << ros_message->light_ratio;
  }

  // Field name: center_distance
  {
    cdr << ros_message->center_distance;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: armor_type
  {
    cdr << (ros_message->armor_type ? true : false);
  }

  return true;
}

static bool _DebugArmor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DebugArmor__ros_msg_type * ros_message = static_cast<_DebugArmor__ros_msg_type *>(untyped_ros_message);
  // Field name: center_x
  {
    cdr >> ros_message->center_x;
  }

  // Field name: is_armor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_armor = tmp ? true : false;
  }

  // Field name: light_ratio
  {
    cdr >> ros_message->light_ratio;
  }

  // Field name: center_distance
  {
    cdr >> ros_message->center_distance;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: armor_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->armor_type = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__DebugArmor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DebugArmor__ros_msg_type * ros_message = static_cast<const _DebugArmor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name center_x
  {
    size_t item_size = sizeof(ros_message->center_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_armor
  {
    size_t item_size = sizeof(ros_message->is_armor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_ratio
  {
    size_t item_size = sizeof(ros_message->light_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_distance
  {
    size_t item_size = sizeof(ros_message->center_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name armor_type
  {
    size_t item_size = sizeof(ros_message->armor_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DebugArmor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__DebugArmor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__DebugArmor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: center_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_armor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: light_ratio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: center_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: armor_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DebugArmor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__msg__DebugArmor(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DebugArmor = {
  "interfaces::msg",
  "DebugArmor",
  _DebugArmor__cdr_serialize,
  _DebugArmor__cdr_deserialize,
  _DebugArmor__get_serialized_size,
  _DebugArmor__max_serialized_size
};

static rosidl_message_type_support_t _DebugArmor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DebugArmor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, DebugArmor)() {
  return &_DebugArmor__type_support;
}

#if defined(__cplusplus)
}
#endif
