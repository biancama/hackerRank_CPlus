//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>

using std::string;
void satisfactory_solution();
unsigned int satisfactory_check(int a, int b, int n);

TEST(satisfactory_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("4\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
satisfactory_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "2";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(satisfactory_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("7\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    satisfactory_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "8";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(satisfactory_check, test03) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("8\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    satisfactory_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "10";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(satisfactory_check, test04) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("254\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    satisfactory_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2098";
    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(satisfactory_check, test05) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("22\n");
    std::cin.rdbuf(input.rdbuf());
    satisfactory_check(2, 5, 22);
// tests go here
    testing::internal::CaptureStdout();
    satisfactory_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "60";
    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

