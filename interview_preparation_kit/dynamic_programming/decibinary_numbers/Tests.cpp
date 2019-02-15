#include "../../../catch.hpp"
#include <iostream>
//
// Created by Massimo Biancalani on 14/10/2018.
//
using namespace std;
long decibinaryNumbers(long x);
long decibinaryToDecimal(long k);

TEST_CASE("decibinary 00") {
    for (int i = 0; i <= 10000; ++i) {
        if (i%10 == 0) {
            cout << endl;
        }
        cout << decibinaryToDecimal(i) << ' ';
    }

/*
    REQUIRE(decibinaryNumbers(1) == 0);
    REQUIRE(decibinaryNumbers(2) == 1);
    REQUIRE(decibinaryNumbers(3) == 2);
    REQUIRE(decibinaryNumbers(4) == 10);
    REQUIRE(decibinaryNumbers(10) == 100);
    */
}
