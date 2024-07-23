cmake_minimum_required(VERSION 3.28)
project(GamesAI)

set(CMAKE_CXX_STANDARD 20)

# Include directories for GamesAI library
include_directories(include)

# Add source files
set(SOURCES
        src/main.cpp
        include/Pathfinding/Graphs.h
        include/Pathfinding/Dijkstra.h
)

# Create MathG library
add_library(GamesAI ${SOURCES})

# Set the library output properties
set_target_properties(GamesAI PROPERTIES
        OUTPUT_NAME "GamesAI"
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# Platform-specific settings
if(WIN32)
    target_compile_definitions(GamesAI PRIVATE -DWIN32)
elseif(APPLE)
    target_compile_definitions(GamesAI PRIVATE -DAPPLE)
endif()

# Link GamesAI library with the main executable
add_executable(main src/main.cpp)

target_link_libraries(main GamesAI)
