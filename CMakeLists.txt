cmake_minimum_required (VERSION 2.6)
project (PointCalculator)


add_executable(PointCalculator main.cpp src/point_calculator.cpp)

target_include_directories(PointCalculator PUBLIC include)