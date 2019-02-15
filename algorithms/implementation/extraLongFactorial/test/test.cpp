//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>

using std::string;

void extra_long_factorial_solution();
TEST(extra_long_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("25\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    extra_long_factorial_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "15511210043330985984000000";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(extra_long_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("5\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    extra_long_factorial_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "120";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(extra_long_check, test07) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("7\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    extra_long_factorial_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "5040";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(extra_long_check, test08) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("8\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    extra_long_factorial_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "40320";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(extra_long_check, test09) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("37\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    extra_long_factorial_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "13763753091226345046315979581580902400000000";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
