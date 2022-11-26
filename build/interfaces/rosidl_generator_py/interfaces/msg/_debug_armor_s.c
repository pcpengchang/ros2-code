// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces/msg/detail/debug_armor__struct.h"
#include "interfaces/msg/detail/debug_armor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__debug_armor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces.msg._debug_armor.DebugArmor", full_classname_dest, 38) == 0);
  }
  interfaces__msg__DebugArmor * ros_message = _ros_message;
  {  // center_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_armor
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_armor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_armor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // light_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->light_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "armor_type");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->armor_type = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__debug_armor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DebugArmor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._debug_armor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DebugArmor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__DebugArmor * ros_message = (interfaces__msg__DebugArmor *)raw_ros_message;
  {  // center_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->center_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_armor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_armor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_armor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->light_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armor_type
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->armor_type ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
