// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef VISION__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define VISION__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_vision __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_vision __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_vision __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_vision __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_vision
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_vision ROSIDL_TYPESUPPORT_C_EXPORT_vision
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_vision ROSIDL_TYPESUPPORT_C_IMPORT_vision
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_vision __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_vision
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_vision __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_vision
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // VISION__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
