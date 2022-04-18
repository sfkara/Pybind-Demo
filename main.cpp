#include <pybind11/pybind11.h>
#include <iostream>
using namespace std;

namespace py = pybind11;

float some_fn(float a, float b)
{
    return a + b;
}

int some_fn_2()
{
    for (int i = 0; i < 5000; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            cout << i << j << "\n";
        }
        //
    }
    return 0;
}

class SomeClass
{
    float multiplier;

public:
    SomeClass(float multiplier_) : multiplier(multiplier_){};

    float multiply(float input)
    {
        return multiplier * input;
    }
    // Accept vector as a input, returns list
    std::vector<float> multiply_list(std::vector<float> items)
    {

        for (auto i = 0; i < items.size(); i++)
        {
            items[i] = multiply(items[i]);
        }
        return items;
    }
};

PYBIND11_MODULE(module_name, handle)
{
    handle.doc() = "tadaaa";
    handle.def("some_fn_2", &some_fn_2);

    py::class_<SomeClass>(handle, "PyClass")
        .def(py::init<float>())
        .def("multiply", &SomeClass::multiply)
        .def("multiply_list", &SomeClass::multiply_list);
}