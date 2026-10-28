// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robo_interfaces:msg/Monitoramento.idl
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
#include "robo_interfaces/msg/detail/monitoramento__struct.h"
#include "robo_interfaces/msg/detail/monitoramento__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robo_interfaces__msg__monitoramento__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("robo_interfaces.msg._monitoramento.Monitoramento", full_classname_dest, 48) == 0);
  }
  robo_interfaces__msg__Monitoramento * ros_message = _ros_message;
  {  // nivel_oxigenio
    PyObject * field = PyObject_GetAttrString(_pymsg, "nivel_oxigenio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nivel_oxigenio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperatura
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperatura");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperatura = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_interfaces__msg__monitoramento__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Monitoramento */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_interfaces.msg._monitoramento");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Monitoramento");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robo_interfaces__msg__Monitoramento * ros_message = (robo_interfaces__msg__Monitoramento *)raw_ros_message;
  {  // nivel_oxigenio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nivel_oxigenio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nivel_oxigenio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperatura
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperatura);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperatura", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
