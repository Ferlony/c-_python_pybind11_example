cmake_minimum_required(VERSION 3.4)
project(pybind_vid)
add_subdirectory(pybind11)
# (module_name, files)
pybind11_add_module(lib main.cpp)

