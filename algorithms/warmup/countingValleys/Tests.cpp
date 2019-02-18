#include "../../../catch.hpp"

//
// Created by Massimo Biancalani on 2019-02-18.
//

using namespace std;

int countingValleys(int n, string s);
TEST_CASE("counting valleys 00") {
    REQUIRE(countingValleys(8, "UDDDUDUU") == 1);
}