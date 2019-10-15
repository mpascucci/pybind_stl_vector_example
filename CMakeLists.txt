project( cvMat_pybind )
cmake_minimum_required(VERSION 3.15)
set (CMAKE_CXX_STANDARD 11)
set(PYBIND11_CPP_STANDARD -std=c++11)
add_subdirectory(pybind11)

# =============================================================================
# specify here which python interpreter you want to compile this module for
# =============================================================================
# set(PYTHON_EXECUTABLE "~/miniconda3/bin/python3")

# =============================================================================
# Define a precompiler macro
# =============================================================================
# add_compile_definitions(BUILDING_PYTHON_MODULE)

# =============================================================================
# Specify the sources file that will be compiled in your python module
# =============================================================================
# pybind11_add_module(<target name>, <pybind code>, <source 1>, <source 2>, ...)
pybind11_add_module(lib_example src/pybind_def.cpp src/mylib.cpp)

# =============================================================================
# Link an external library as usual
# =============================================================================
# target_link_libraries(lib_example PRIVATE ${THE_LIBRARY})