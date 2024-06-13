cmake_minimum_required(VERSION 3.10)
project(SimpleMath)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(SimpleMathLib
    src/simplemath.cpp
)

add_executable(test_program
    tests/main.cpp
)

target_link_libraries(test_program
    SimpleMathLib
)
