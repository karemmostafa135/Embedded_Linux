cmake_minimum_required(VERSION 3.0...4.0)
project(calculator)
set(Src_File main.c )
add_executable(trial ${Src_File}) ##./implementations/sub.c ./implementations/mult.c ./implementations/add.c ./implementations/div.c )
add_subdirectory(${CMAKE_HOME_DIRECTORY}/implementations/)
target_link_libraries(trial PRIVATE my_library)
target_include_directories(trial PUBLIC ./header)
message("${Src_File}") 

