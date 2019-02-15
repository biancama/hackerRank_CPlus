//
// Created by Massimo Biancalani on 23/09/16.
//
#include "gtest/gtest.h"
#include <string>

using std::string;
void compare_the_triplets_solution();

TEST(compare_the_triplets_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("5 6 7\n"
                                 "3 6 10\n"
                                 );
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    compare_the_triplets_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "1 1\n";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}