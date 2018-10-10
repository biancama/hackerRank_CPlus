#include "../../../catch.hpp"
#include <string>
//
// Created by Massimo Biancalani on 06/10/2018.
//
using namespace std;
string abbreviation(string a, string b);
TEST_CASE("abbbreviation 00" ) {

    REQUIRE(abbreviation("daBcd", "ABC") == "YES");
}
TEST_CASE("abbbreviation 01" ) {


    REQUIRE(abbreviation("AbcDE", "ABDE") == "YES");
}

TEST_CASE("abbbreviation 02" ) {


    REQUIRE(abbreviation("ABC", "ABDE") == "NO");
}


TEST_CASE("abbbreviation 03" ) {


    REQUIRE(abbreviation("ABDe", "ABDE") == "YES");
}

TEST_CASE("abbbreviation 04") {


    REQUIRE(abbreviation("abcAbbfdbdfbBfdsDfdsfdsE", "ABDE") == "YES");
}

TEST_CASE("abbbreviation 05") {


    REQUIRE(abbreviation("a", "A") == "YES");
}

TEST_CASE("abbbreviation 06") {


    REQUIRE(abbreviation("as", "") == "YES");
}

TEST_CASE("abbbreviation 07") {


    REQUIRE(abbreviation("as", "") == "YES");
}
TEST_CASE("abbbreviation 08") {


    REQUIRE(abbreviation("as", "B") == "NO");
}

TEST_CASE("abbbreviation 09") {


    REQUIRE(abbreviation("AbCdE", "AFE") == "NO");
}

