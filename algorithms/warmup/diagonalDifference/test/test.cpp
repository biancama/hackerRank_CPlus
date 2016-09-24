//
// Created by Massimo Biancalani on 23/09/16.
//
#include "gtest/gtest.h"
#include <string>
#include "main.cpp"
using std::string;
TEST(test_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("3\n"
                                 "11 2 4\n"
                                 "4 5 6\n"
                                 "10 8 -12");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "15\n";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}