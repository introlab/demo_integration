#include <cppcount_pybind11/charactersPython.h>

namespace py = pybind11;

PYBIND11_MODULE(cppcount_pybind11, m)
{
    initCharactersPython(m);
}
