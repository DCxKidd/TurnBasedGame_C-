# CoreEngine/CMakeLists.txt
project(CoreEngine CXX)

# Tell complier where the public headers (interfaces) are
include_directories(include)

# Define the core logic file and compile it as a Shared Library (.dll)
add_library(CoreEngine SHARED src/engine.cpp)
