//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
#include "main.cpp"
using std::string;
TEST(test_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("aba\n"
                                 "10\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "7";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(test_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("a\n"
                                     "1000000000000\n"
                              );
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "1000000000000";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}