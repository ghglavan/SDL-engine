cmake_minimum_required( VERSION 2.6 )
project ( SDL-ENGINE )

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

add_executable(hello ${CMAKE_BINARY_DIR}/../src/hello.cpp)

add_library(Game ${CMAKE_BINARY_DIR}/../src/Game.cpp)

target_link_libraries(Game -lSDL2)

target_link_libraries( hello -lSDL2 Game )