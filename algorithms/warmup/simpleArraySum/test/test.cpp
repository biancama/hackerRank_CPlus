//
// Created by Massimo Biancalani on 23/09/16.
//
#include "gtest/gtest.h"
#include <string>

using std::string;
void simple_array_sum_solution();

TEST(simple_array_sum_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("6\n"
                                 "1 2 3 4 10 11\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    simple_array_sum_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "31\n";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}