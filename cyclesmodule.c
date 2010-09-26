#include <Python.h>
#include "cycle.h"

static PyObject* cycles_ticks(PyObject *self, PyObject *args) {
  ticks t = getticks();
  return Py_BuildValue("d", (double) t);
}

static PyMethodDef CyclesMethods[] = {
  {"ticks",  cycles_ticks, METH_VARARGS, "Return number of ticks since reset."},
  {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initcycles(void) {
  Py_InitModule("cycles", CyclesMethods);
}
