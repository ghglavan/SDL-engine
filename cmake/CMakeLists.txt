cmake_minimum_required( VERSION 2.6 )
project ( SDL-ENGINE )

set( SRC ./src)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

add_executable(hello ${CMAKE_BINARY_DIR}/../src/hello.cpp)

include_directories("${SRC}")

add_library(init ${CMAKE_BINARY_DIR}/../src/init.cpp)

target_link_libraries( hello -lSDL2 init )

