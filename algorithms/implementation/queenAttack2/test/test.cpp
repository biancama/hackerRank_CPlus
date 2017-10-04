//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include "main.cpp"
using std::string;
TEST(test_check, test01) {
std::streambuf* orig = std::cin.rdbuf();
std::istringstream input("4 0\n4 4\n");
std::cin.rdbuf(input.rdbuf());

// tests go here
testing::internal::CaptureStdout();
solution();
string output = testing::internal::GetCapturedStdout();
string expectedOutput = "9";

std::cin.rdbuf(orig);
EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
TEST(test_check, test02) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("5 3\n4 3\n5 5\n4 2\n2 3\n");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "10";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
TEST(test_check, test03) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("100 100\n"
                                     "54 30\n"
                                     "48 36\n"
                                     "38 46\n"
                                     "60 24\n"
                                     "70 14\n"
                                     "54 36\n"
                                     "54 24\n"
                                     "60 30\n"
                                     "48 30\n"
                                     "71 50\n"
                                     "14 97\n"
                                     "47 31\n"
                                     "29 68\n"
                                     "90 10\n"
                                     "36 85\n"
                                     "63 24\n"
                                     "32 13\n"
                                     "64 57\n"
                                     "45 57\n"
                                     "86 19\n"
                                     "43 86\n"
                                     "68 72\n"
                                     "29 25\n"
                                     "48 59\n"
                                     "38 78\n"
                                     "45 16\n"
                                     "40 92\n"
                                     "76 85\n"
                                     "40 10\n"
                                     "65 16\n"
                                     "71 18\n"
                                     "90 40\n"
                                     "65 45\n"
                                     "10 37\n"
                                     "19 82\n"
                                     "42 56\n"
                                     "46 60\n"
                                     "94 14\n"
                                     "34 36\n"
                                     "95 49\n"
                                     "78 67\n"
                                     "86 23\n"
                                     "28 12\n"
                                     "95 57\n"
                                     "38 19\n"
                                     "61 49\n"
                                     "67 42\n"
                                     "28 25\n"
                                     "38 28\n"
                                     "91 20\n"
                                     "90 86\n"
                                     "81 19\n"
                                     "18 43\n"
                                     "29 69\n"
                                     "36 20\n"
                                     "72 75\n"
                                     "39 50\n"
                                     "17 92\n"
                                     "48 25\n"
                                     "20 79\n"
                                     "82 57\n"
                                     "58 50\n"
                                     "94 70\n"
                                     "17 19\n"
                                     "73 20\n"
                                     "45 12\n"
                                     "19 89\n"
                                     "45 12\n"
                                     "59 74\n"
                                     "63 71\n"
                                     "32 23\n"
                                     "67 85\n"
                                     "24 25\n"
                                     "18 61\n"
                                     "97 50\n"
                                     "70 37\n"
                                     "30 10\n"
                                     "39 90\n"
                                     "75 58\n"
                                     "58 34\n"
                                     "47 62\n"
                                     "28 28\n"
                                     "79 34\n"
                                     "73 80\n"
                                     "93 36\n"
                                     "25 45\n"
                                     "48 75\n"
                                     "42 13\n"
                                     "18 69\n"
                                     "35 21\n"
                                     "18 87\n"
                                     "57 19\n"
                                     "26 92\n"
                                     "94 34\n"
                                     "84 48\n"
                                     "61 95\n"
                                     "62 89\n"
                                     "59 74\n"
                                     "50 40\n"
                                     "36 37\n"
                                     "95 62");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "62";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}
TEST(test_check, test04) {
    std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("100 100\n"
                                     "48 81\n"
                                     "54 87\n"
                                     "64 97\n"
                                     "42 75\n"
                                     "32 65\n"
                                     "42 87\n"
                                     "32 97\n"
                                     "54 75\n"
                                     "64 65\n"
                                     "48 87\n"
                                     "48 75\n"
                                     "54 81\n"
                                     "42 81\n"
                                     "45 17\n"
                                     "14 24\n"
                                     "35 15\n"
                                     "95 64\n"
                                     "63 87\n"
                                     "25 72\n"
                                     "71 38\n"
                                     "96 97\n"
                                     "16 30\n"
                                     "60 34\n"
                                     "31 67\n"
                                     "26 82\n"
                                     "20 93\n"
                                     "81 38\n"
                                     "51 94\n"
                                     "75 41\n"
                                     "79 84\n"
                                     "79 65\n"
                                     "76 80\n"
                                     "52 87\n"
                                     "81 54\n"
                                     "89 52\n"
                                     "20 31\n"
                                     "10 41\n"
                                     "32 73\n"
                                     "83 98\n"
                                     "87 61\n"
                                     "82 52\n"
                                     "80 64\n"
                                     "82 46\n"
                                     "49 21\n"
                                     "73 86\n"
                                     "37 70\n"
                                     "43 12\n"
                                     "94 28\n"
                                     "10 93\n"
                                     "52 25\n"
                                     "50 61\n"
                                     "52 68\n"
                                     "52 23\n"
                                     "60 91\n"
                                     "79 17\n"
                                     "93 82\n"
                                     "12 18\n"
                                     "75 64\n"
                                     "69 69\n"
                                     "94 74\n"
                                     "61 61\n"
                                     "46 57\n"
                                     "67 45\n"
                                     "96 64\n"
                                     "83 89\n"
                                     "58 87\n"
                                     "76 53\n"
                                     "79 21\n"
                                     "94 70\n"
                                     "16 10\n"
                                     "50 82\n"
                                     "92 20\n"
                                     "40 51\n"
                                     "49 28\n"
                                     "51 82\n"
                                     "35 16\n"
                                     "15 86\n"
                                     "78 89\n"
                                     "41 98\n"
                                     "70 46\n"
                                     "79 79\n"
                                     "24 40\n"
                                     "91 13\n"
                                     "59 73\n"
                                     "35 32\n"
                                     "40 31\n"
                                     "14 31\n"
                                     "71 35\n"
                                     "96 18\n"
                                     "27 39\n"
                                     "28 38\n"
                                     "41 36\n"
                                     "31 63\n"
                                     "52 48\n"
                                     "81 25\n"
                                     "49 90\n"
                                     "32 65\n"
                                     "25 45\n"
                                     "63 94\n"
                                     "89 50\n"
                                     "43 41");
    std::cin.rdbuf(input.rdbuf());

// tests go here
    testing::internal::CaptureStdout();
    solution();
    string output = testing::internal::GetCapturedStdout();
    string expectedOutput = "40";

    std::cin.rdbuf(orig);
    EXPECT_STREQ(expectedOutput.c_str(), output.c_str());
}


