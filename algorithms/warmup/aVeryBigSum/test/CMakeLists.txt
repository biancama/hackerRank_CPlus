include_directories(../src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(aVeryBigSumTests
        test.cpp)

target_link_libraries(aVeryBigSumTests gtest gtest_main)