//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>

using std::string;
void staircase_solution();

TEST(staircase_check, test01) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("6\n");
    std::cin.rdbuf(input.rdbuf());

    // tests go here
    testing::internal::CaptureStdout();
    staircase_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "#\n"
            "    ##\n"
            "   ###\n"
            "  ####\n"
            " #####\n"
            "######\n";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
