# Wrap a C++ library using Pybind11

This is a **minimalist working example** of building a python module to wrap a custom C++ library which uses the **STL** (**vector**) and **template** classes/functions using PyBind11.

Feel free to fork this project to start a new one or add any of the files to your project.

## Project tree

```{}
/
|- pybind/                      # The Pybind library (as git submodule)
|- src/
    |- mylib.*                  # The custom library
    |- pybind_def.cpp           # Pybind glue code
    |- test.cpp                 # simple C++ test of the library
|- CMakeLists.txt               # CMake configuration file
|- setup.py                     # Python install instructions
|- README.md                    # This file
```


### explication

In order to build your python module you need the `pybind11` folder (from the PyBind github directly). Pybind is included here as a git submodule, therefore you have 2 options for cloning this repo (and get pybind11):

1. use directly: `git clone --recursive https://github.com/mpascucci/pybind_stl_vector_example.git` the first time you clone this repo.

2. clone normally and then run `git submodule init` and `git submodule update` to get pybind11.


Next, you have to do is edit the following files for your project's needs.

- `CMakeLists.txt`

- `setup.py`

- `src/pybind_def.cpp`


## Specify the Python Interpreter

If you want to compile the python module for a particular python interpter installed on your system, you can specify it by editing this line in the `CmakeLists.txt` file:
```set(PYTHON_EXECUTABLE "~/miniconda3/bin/python3")```

## Build

This project is based on this [Pybind-Cmake example](https://github.com/pybind/cmake_example).

Go to the source folder and run the command

```$ pip install -e .```

This will compile and generate a `.so` importable python module in the project folder.


If you want to install the module in your system instead, run:

```$ pip install .```


## Test

Run the `test.py` python script (using the same interpreter if you specified one).

Alternatively tun a python session in the project root:
```{shell}
$ python
```
```{python}
>>> import lib_example
>>> import numpy as np
>>> v = np.arange(10)
>>> print(lib_example.sum_vector(v))
45
```
