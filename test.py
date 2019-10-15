import numpy as np
import lib_example


# ==============================================================================
# USE SIMPLE FUNCTION
# ==============================================================================
v = np.arange(10)
print("the sum of the vector is", lib_example.sum_vector(v))


# ==============================================================================
# USE SIMPLE CLASS
# ==============================================================================
a = lib_example.Fruit("apple",100,True)
print("this fruit kind is:", a.get_name())
print("it weights:", a.get_weight(), "grams")
if a.good :
    print("it is good")
else:
    print("it is bad")


# ==============================================================================
# USE TEMPLATE CLASS AND FUNCTION
# ==============================================================================
vector_info = lib_example.get_vector_info(v)
print("vector length:", vector_info.length)
print("vector sum:", vector_info.sum)
print("vector mean:", vector_info.mean)