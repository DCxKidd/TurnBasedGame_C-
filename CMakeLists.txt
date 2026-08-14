cmake_minimum_required(VERSION 3.15)

# Name of project and specified C++
project(TurnBasedGame_C- CXX)

# Tell complier to use modern C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake to integrate vcpkg packages automatically
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# Tell Cmake to go read the CMakeLists.txt inside C++ engine folder
add_subdirectory(CoreEngine)