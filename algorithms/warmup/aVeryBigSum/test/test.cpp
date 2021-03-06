//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>

using std::string;
void a_very_big_sum_solution();

TEST(a_very_big_sum_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("5\n"
                                 "1000000001 1000000002 1000000003 1000000004 1000000005"

                                 );
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    a_very_big_sum_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "5000000015\n";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}