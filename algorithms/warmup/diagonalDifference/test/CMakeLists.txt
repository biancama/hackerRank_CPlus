include_directories(../src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(diagonalDifferenceTests
        test.cpp)

target_link_libraries(diagonalDifferenceTests gtest gtest_main)