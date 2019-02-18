#include "../../../catch.hpp"
#include <vector>


//
// Created by Massimo Biancalani on 2019-02-18.
//
using namespace std;

int sockMerchant(int n, vector<int> ar);

TEST_CASE("sock merchant 00") {
    vector<int> input = {10, 20, 20, 10, 10, 30, 50, 10, 20};

    REQUIRE(sockMerchant(input.size(), input) == 3);
}