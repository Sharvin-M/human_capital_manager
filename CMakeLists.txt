cmake_minimum_required(VERSION 3.28)
project(humanManagementSystem)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wdeprecated -Werror -Wconversion -Wpedantic -Wshadow")

add_executable(humanManagementSystem main.cpp
        Project.hpp
        Employee.hpp)
        Employee.hpp
        Startup.hpp
