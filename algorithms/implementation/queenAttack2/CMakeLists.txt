cmake_minimum_required(VERSION 3.0) # setting this is required
set(PROJECT_NAME queenAttack2)
project(${PROJECT_NAME})            # this sets the project name

add_subdirectory (src)

enable_testing ()
add_subdirectory (test)