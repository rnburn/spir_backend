cmake_minimum_required(VERSION 3.0)

find_package(LLVM REQUIRED CONFIG)
find_package (Threads)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/..)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_definitions( -std=c++11 -stdlib=libc++ -fno-rtti )

add_subdirectory(lib)
add_subdirectory(tools)
