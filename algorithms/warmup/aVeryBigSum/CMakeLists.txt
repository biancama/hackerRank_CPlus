cmake_minimum_required(VERSION 3.0) # setting this is required
project(aVeryBigSum)            # this sets the project name

add_subdirectory (src)

enable_testing ()
add_subdirectory (test)