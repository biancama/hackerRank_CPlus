#include "../../../catch.hpp"
#include <vector>
//
// Created by Massimo Biancalani on 10/10/2018.
//
using namespace std;

long candies(int n, vector<int> arr);
TEST_CASE("candies 00") {
    vector<int> input ={1, 2, 1, 2, 3, 1};
    REQUIRE(candies(input.size(), input) == 10);
}

TEST_CASE("candies 01") {
    vector<int> input = {1, 2, 2};
    REQUIRE(candies(input.size(), input) == 4);

}

TEST_CASE("candies 02") {
    vector<int> input = {2, 4, 2, 6, 1, 7, 8, 9, 2, 1};
    REQUIRE(candies(input.size(), input) == 19);

}

TEST_CASE("candies 03") {
    vector<int> input = {2, 4, 3, 5, 2, 6, 4, 5};
    REQUIRE(candies(input.size(), input) == 12);
}

TEST_CASE("candies 04") {
    vector<int> input = {3, 2, 1, 4, 1};
    REQUIRE(candies(input.size(), input) == 9);

}

TEST_CASE("candies 05") {
    vector<int> input = {3};
    REQUIRE(candies(input.size(), input) == 1);

}