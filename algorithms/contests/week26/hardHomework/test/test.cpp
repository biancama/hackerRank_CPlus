//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
using std::string;
void hard_home_work_solution();

TEST(hard_home_work_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("3\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
hard_home_work_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "2.524412954";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(hard_home_work_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("12\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    hard_home_work_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2.807953100";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
/*
TEST(test_check, test03) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("16700\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    hard_home_work_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2.876370614";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
*/
TEST(hard_home_work_check, test04) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("300\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    hard_home_work_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2.998640411";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(hard_home_work_check, test05) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("400000\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    hard_home_work_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2.542792343";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

