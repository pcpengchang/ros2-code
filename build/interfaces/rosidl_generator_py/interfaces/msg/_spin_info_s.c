// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/SpinInfo.idl
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
#include "interfaces/msg/detail/spin_info__struct.h"
#include "interfaces/msg/detail/spin_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__spin_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("interfaces.msg._spin_info.SpinInfo", full_classname_dest, 34) == 0);
  }
  interfaces__msg__SpinInfo * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // target_spinning
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_spinning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->target_spinning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // suggest_fire
    PyObject * field = PyObject_GetAttrString(_pymsg, "suggest_fire");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->suggest_fire = (Py_True == field);
    Py_DECREF(field);
  }
  {  // jump_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "jump_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->jump_count = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // yaw_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_diff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_diff = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // jump_period
    PyObject * field = PyObject_GetAttrString(_pymsg, "jump_period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->jump_period = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_after_jumping
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_after_jumping");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_after_jumping = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__spin_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpinInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._spin_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpinInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__SpinInfo * ros_message = (interfaces__msg__SpinInfo *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_spinning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->target_spinning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_spinning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // suggest_fire
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->suggest_fire ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "suggest_fire", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jump_count
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->jump_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "jump_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_diff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_diff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jump_period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->jump_period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "jump_period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_after_jumping
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_after_jumping);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_after_jumping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
