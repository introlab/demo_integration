#include <cppcount_pybind11/charactersPython.h>
#include <cppcount_pybind11/valuesPython.h>

namespace py = pybind11;

PYBIND11_MODULE(cppcount_pybind11, m)
{
    initCharactersPython(m);
    initValuesPython(m);

#ifdef CPP_COUNT_VERSION
    m.attr("__version__") = CPP_COUNT_VERSION;
#else
    m.attr("__version__") = "dev";
#endif
}
