# Main executable sources, DO NOT EDIT!
set(exe_sources main.cpp)

# User code source, this is where YOUR CODE IS AT
set(lib_sources <Module>.cpp <Application>.cpp <Vehicle>.cpp <Car>.cpp <Truck>.cpp)

# Create a static library for user code
add_library(assignment_lib STATIC ${lib_sources} "Car.cpp" "Truck.cpp")
# Enable C++ 17
target_compile_features(assignment_lib PUBLIC cxx_std_17)
# Add include headers
target_include_directories(assignment_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Create executable that links with the static library target
add_executable(assignment ${exe_sources} "Car.cpp" "Truck.cpp")
target_link_libraries(assignment PRIVATE assignment_lib)
