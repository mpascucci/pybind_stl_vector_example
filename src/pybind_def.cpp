#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "mylib.hpp"
#include <string>

namespace py = pybind11;

PYBIND11_MODULE(lib_example, m)
{
    // =========================================================================
    // SIMPLE FUNCTION
    // =========================================================================
    m.def("sum_vector", &mylib::sum, "sum the value of a vector ", py::arg("v"));

    // =========================================================================
    // SIMPLE CLASS
    // =========================================================================
    py::class_<mylib::Fruit>(m, "Fruit")
        .def(py::init([](string name, int weight, bool is_good) {
            return new mylib::Fruit(name,weight,is_good);
        }))
        .def_readwrite("good", &mylib::Fruit::good)
        .def("get_name", &mylib::Fruit::getName)
        .def("get_weight", &mylib::Fruit::getWeight);

    // =========================================================================
    // TEMPLATE CLASS AND FUNCTION
    // =========================================================================
    py::class_<mylib::VectorInfo<double>>(m, "VectorInfo")
        .def(py::init([](size_t length, double sum, double mean) {
            return new mylib::VectorInfo<double>(length, sum, mean);
        }))
        .def_readwrite("length", &mylib::VectorInfo<double>::length)
        .def_readwrite("sum", &mylib::VectorInfo<double>::sum)
        .def_readwrite("mean", &mylib::VectorInfo<double>::mean);

    m.def("get_vector_info", &mylib::getVectorInfo<double>);
}