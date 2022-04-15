#include <pybind11/pybind11.h>

float some_fn(float a, float b)
{
    return a + b;
}

PYBIND11_MODULE(module_name, handle)
{
    handle.doc() = "tadaaa";
    handle.def("some_fn", &some_fn);
}