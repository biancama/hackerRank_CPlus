//
// Created by Massimo Biancalani on 2019-02-15.
//

#include "../../../catch.hpp"
#include <string>


using namespace std;

string gameOfStones(int n);
TEST_CASE("game of stones 00" ) {
    REQUIRE(gameOfStones(1) == "Second");
}
TEST_CASE("game of stones 01" ) {
    REQUIRE(gameOfStones(2) == "First");
}
TEST_CASE("game of stones 02" ) {
    REQUIRE(gameOfStones(3) == "First");
}
TEST_CASE("game of stones 03" ) {
    REQUIRE(gameOfStones(4) == "First");
}
TEST_CASE("game of stones 04" ) {
    REQUIRE(gameOfStones(5) == "First");
}
TEST_CASE("game of stones 05" ) {
    REQUIRE(gameOfStones(6) == "First");
}
TEST_CASE("game of stones 06" ) {
    REQUIRE(gameOfStones(7) == "Second");
}
TEST_CASE("game of stones 07" ) {
    REQUIRE(gameOfStones(10) == "First");
}

TEST_CASE("game of stones 08" ) {
    REQUIRE(gameOfStones(11) == "First");
}
TEST_CASE("game of stones 09" ) {
    REQUIRE(gameOfStones(14) == "Second");
}
