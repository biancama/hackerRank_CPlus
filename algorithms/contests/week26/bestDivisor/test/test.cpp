//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
using std::string;

void best_divisor_solution();
TEST(best_divisor_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("12\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    best_divisor_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "6";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(best_divisor_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("47\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    best_divisor_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "47";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(best_divisor_check, test03) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("104\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    best_divisor_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "8";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(best_divisor_check, test04) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("1\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    best_divisor_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "1";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(best_divisor_check, test05) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("0\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    best_divisor_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "0";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(best_divisor_check, test06) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("15432\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    best_divisor_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "3858";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
