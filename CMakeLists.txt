cmake_minimum_required (VERSION 3.9)
set(CMAKE_GENERATOR "MinGW Makefiles")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/arch)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output/bin)
set(THREADS_PREFER_PTHREAD_FLAG ON)
project (gnu_cpp_tutorial)
# set -m32 -m64 for specific output
add_compile_options(-std=c++17) 
add_executable(gnu_cpp_tutorial program.cpp)
find_package(Threads REQUIRED)
target_link_libraries(gnu_cpp_tutorial Threads::Threads)