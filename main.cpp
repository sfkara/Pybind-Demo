#include <pybind11/pybind11.h>
#include <iostream>
using namespace std;

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

PYBIND11_MODULE(module_name, handle)
{
    handle.doc() = "tadaaa";
    handle.def("some_fn_2", &some_fn_2);
}