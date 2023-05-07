cmake_minimum_required(VERSION 3.12)
set(CMAKE_C_COMPILER "/usr/bin/gcc-12")
set(CMAKE_CXX_COMPILER "/usr/bin/g++-12")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_KNOWN_FEATURES 23)
# PROJECT = "Matlib"
project("MatlibTest")
project("VectorTest")

project("Matlib")

include_directories("headers")

# TEST
add_executable("MatlibTest" "bin/main.cpp")

add_executable("VectorTest" "tests/test_vector.cpp" 
                            "src/vector.cpp" 
                            "headers/logging.h"
                            )



# LIB
add_executable("Matlib" "bin/main.cpp")
