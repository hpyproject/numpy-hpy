#ifndef _NPY_ARRAY_SEQUENCE_H_
#define _NPY_ARRAY_SEQUENCE_H_

NPY_NO_EXPORT int
array_contains(PyArrayObject *self, PyObject *el);

NPY_NO_EXPORT PyObject *
array_concat(PyObject *self, PyObject *other);

#endif
