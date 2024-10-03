#include <pybind11/pybind11.h>

namespace py = pybind11;

double sum(double a, double b) { return a + b; }
double minus(double a, double b) { return a - b; }

// (module name, module variable)
PYBIND11_MODULE(lib, m) {
  m.doc() = "pybind11 example plugin"; // optional module docstring

  // (function name, function pointer, function docstring)
  m.def("sum", &sum, "A function that adds two numbers");
  m.def("minus", &minus, "A function that subtracts two numbers");
}
