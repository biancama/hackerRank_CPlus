include_directories(../src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(compareTheTripletsTests
        test.cpp)

target_link_libraries(compareTheTripletsTests gtest gtest_main)