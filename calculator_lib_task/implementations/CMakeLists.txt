cmake_minimum_required(VERSION 3.0...4.0)
project(my_library LANGUAGES C)
add_library(my_library STATIC add.c div.c mult.c sub.c )
target_include_directories(my_library PUBLIC ${CMAKE_HOME_DIRECTORY}/header) 
