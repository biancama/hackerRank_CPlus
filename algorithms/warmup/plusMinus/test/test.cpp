//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
#include "main.cpp"
using std::string;
TEST(test_check, test01) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("6\n"
                                     "-4 3 -9 0 4 1\n");
    std::cin.rdbuf(input.rdbuf());

    // tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "0.5\n"
            "0.333333\n"
            "0.166667\n";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
