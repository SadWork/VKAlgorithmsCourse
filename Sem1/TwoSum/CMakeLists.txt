cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# Подключаем Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests test.cpp two_sum.cpp)
add_executable(two_sum main.cpp two_sum.cpp)
target_link_libraries(tests GTest::GTest GTest::Main pthread)
