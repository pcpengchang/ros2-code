// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/debug_lights__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DebugLights_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::DebugLights(_init);
}

void DebugLights_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::DebugLights *>(message_memory);
  typed_message->~DebugLights();
}

size_t size_function__DebugLights__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interfaces::msg::DebugLight> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DebugLights__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interfaces::msg::DebugLight> *>(untyped_member);
  return &member[index];
}

void * get_function__DebugLights__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interfaces::msg::DebugLight> *>(untyped_member);
  return &member[index];
}

void resize_function__DebugLights__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interfaces::msg::DebugLight> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DebugLights_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces::msg::DebugLight>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::DebugLights, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__DebugLights__data,  // size() function pointer
    get_const_function__DebugLights__data,  // get_const(index) function pointer
    get_function__DebugLights__data,  // get(index) function pointer
    resize_function__DebugLights__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DebugLights_message_members = {
  "interfaces::msg",  // message namespace
  "DebugLights",  // message name
  1,  // number of fields
  sizeof(interfaces::msg::DebugLights),
  DebugLights_message_member_array,  // message members
  DebugLights_init_function,  // function to initialize message memory (memory has to be allocated)
  DebugLights_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DebugLights_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DebugLights_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::DebugLights>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::DebugLights_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, DebugLights)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::DebugLights_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
