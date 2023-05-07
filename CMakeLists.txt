cmake_minimum_required(VERSION 3.22)

# PROJECT = "Matlib"
project("MatlibTest")
project("VectorTest")

project("Matlib")

# TEST
add_executable("MatlibTest" "bin/main.cpp")

add_executable("VectorTest" "tests/test_vector.cpp" "src/vector.cpp")



# LIB
add_executable("Matlib" "bin/main.cpp")
