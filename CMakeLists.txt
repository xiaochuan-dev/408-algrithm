cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(408algrithm)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(algorithm INTERFACE)
target_include_directories(algorithm INTERFACE src)

file(GLOB TEST_FILES "tests/*.cpp")
add_executable(runtests ${TEST_FILES})
target_link_libraries(runtests algorithm gtest_main gtest)
add_test(NAME all_tests COMMAND runtests)