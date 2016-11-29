//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
#include "main.cpp"
using std::string;
TEST(test_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("12\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "6";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(test_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("47\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "47";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(test_check, test03) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("104\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "8";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(test_check, test04) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("1\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "1";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(test_check, test05) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("0\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "0";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(test_check, test06) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("15432\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "3858";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
