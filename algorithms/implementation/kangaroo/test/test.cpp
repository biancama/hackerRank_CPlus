//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>

using std::string;

void kangaroo_solution();

TEST(kangaroo_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("0 3 4 2\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    kangaroo_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "YES";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(kangaroo_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("0 2 5 3\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    kangaroo_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "NO";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}