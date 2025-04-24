cmake_minimum_required(VERSION 3.5)

project(QtNN)

set(CMAKE_CXX_STANDARD 11)

# Enable auto features
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set Qt path (adjust according to your installation)
set(CMAKE_PREFIX_PATH "/opt/Qt/5.15.2/gcc_64/lib/cmake")

# Find Qt5 Widgets
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Include directories
include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(lib)

# Add executable
add_executable(QtNN
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

# Link libraries
target_link_libraries(QtNN
    ${Qt5Widgets_LIBRARIES}
    ${CMAKE_CURRENT_SOURCE_DIR}/../target/release/libneural_network.so
)

# Copy the Rust library after build
add_custom_command(TARGET QtNN POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/../target/release/libneural_network.so
    ${CMAKE_CURRENT_BINARY_DIR}
)