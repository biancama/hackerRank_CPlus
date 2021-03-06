//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
using std::string;
void music_in_the_street_solution();
TEST(music_in_the_street_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("2\n"
                                 "1 3\n"
                                 "7 2 3");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
    music_in_the_street_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "-2";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


TEST(music_in_the_street_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("5\n"
                                     "1 2 3 5 8\n"
                                     "7 2 3");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    music_in_the_street_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "3";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

