#include <cppcount_pybind11/valuesPython.h>

#include <cppcount/values.h>

#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include <functional>

using namespace std;
namespace py = pybind11;


template<class T>
unordered_map<T, size_t> countValues(const vector<T>& values)
{
    return countValues(values.begin(), values.end());
}

template<class T>
unordered_map<T, size_t> countValuesMap(const vector<T>& values, function<T(const T&)> map)
{
    return countValues(values.begin(), values.end(), map);
}

void initValuesPython(pybind11::module& m)
{
    m.def("count_values", &countValues<int>, py::arg("values"));
    m.def("count_values", &countValues<string>, py::arg("values"));

    m.def("count_values", &countValuesMap<int>, py::arg("values"), py::arg("pred"));
    m.def("count_values", &countValuesMap<string>, py::arg("values"), py::arg("pred"));
}
