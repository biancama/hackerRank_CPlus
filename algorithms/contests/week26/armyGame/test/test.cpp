//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <string>
using std::string;
void army_game_solution();
TEST(army_game, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("2 2\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
army_game_solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "1";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("2 1\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "1";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test03) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("4 1\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test04) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("4 4\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "4";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test05) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("4 2\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "2";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test06) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("4 3\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "4";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test07) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("1 1\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "1";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}

TEST(army_game, test08) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("0 40\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    army_game_solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "0";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}