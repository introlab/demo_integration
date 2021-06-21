#include <cppcount_pybind11/charactersPython.h>

#include <cppcount/characters.h>

#include <pybind11/stl.h>

using namespace std;
namespace py = pybind11;

void initCharactersPython(pybind11::module& m)
{
    m.def("count_characters", &countCharacters, py::arg("string"));
    m.def("count_characters_ignoreCase", &countCharactersIgnoreCase, py::arg("string"));
}
