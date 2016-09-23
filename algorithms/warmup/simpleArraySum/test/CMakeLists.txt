include_directories(../src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicArraySumTests
        test.cpp)

target_link_libraries(runBasicArraySumTests gtest gtest_main)