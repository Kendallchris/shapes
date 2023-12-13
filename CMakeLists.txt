cmake_minimum_required(VERSION 3.21)
project(shape_vector_assignment)

set(CMAKE_CXX_STANDARD 14)

add_executable(shape_vector_assignment main_extra.cpp shape.cpp shape.h ellipse.cpp ellipse.h circle.cpp circle.h rectangle.cpp rectangle.h square.cpp square.h test_functions.h test_functions.cpp triangle.cpp triangle.h equilateraltriangle.cpp equilateraltriangle.h test_functions_extra.cpp test_functions_extra.h)
