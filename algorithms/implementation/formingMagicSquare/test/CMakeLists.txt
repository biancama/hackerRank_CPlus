include_directories(../src)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME}Tests
        test.cpp)

target_link_libraries(${PROJECT_NAME}Tests gtest gtest_main)