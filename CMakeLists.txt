cmake_minimum_required(VERSION 3.15)

# Name of project and specified C++
project(CoreEngine CXX)

# Tell CMake to use modern C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Get packages in vcpkg.json
find_package(spdlog CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

# Tell the compiler where to look for header file
include_directories(include)

# Build core engine as Shared Library (.dll)
# engine.cpp is the main entry point for the logic
add_library(CoreEngine SHARED src/engine.cpp)

# Link downloaded packages to CoreEngineLibrary
target_link_libraries(CoreEngine PRIVATE spdlog::spdlog nlohmann_json::nlohmann_json)
