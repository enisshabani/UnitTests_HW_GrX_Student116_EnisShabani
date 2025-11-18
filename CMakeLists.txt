cmake_minimum_required(VERSION 3.10)
project(UnitTests_HW_GrX_Student111_EnisShabani)

set(CMAKE_CXX_STANDARD 17)

include_directories(MyFunctions)
include_directories(googletest/googletest/include)

add_subdirectory(googletest)

file(GLOB MY_FUNCTIONS "MyFunctions/*.cpp")
file(GLOB MY_TESTS "MyFunctionsTests/*.cpp")

add_executable(runTests
    ${MY_FUNCTIONS}
    ${MY_TESTS}
)

target_link_libraries(runTests gtest gtest_main pthread)
