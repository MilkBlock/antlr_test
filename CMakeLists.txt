cmake_minimum_required(VERSION 3.16)
project(antlr_test)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_COMPILER "g++")

file(GLOB_RECURSE LIB_SRC "lib/*.cpp" )
file(GLOB_RECURSE GERATED "generated/*.cpp")
message("${GERATED}")

include_directories(third_party/antlr-runtime generated lib)
link_directories(third_party/lib)

add_executable(antlr_test main.cpp ${LIB_SRC} ${GERATED} )
target_link_libraries(antlr_test libantlr4-runtime.a)

#google test
# set(GTest_DIR /usr/local/lib/cmake/GTest)
# find_package(GTest REQUIRED)
# include_directories(${GTEST_INCLUDE_DIRS})
# enable_testing()
