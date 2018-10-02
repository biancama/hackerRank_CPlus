#include "../../../catch.hpp"
#include <vector>
using namespace std;

int maxSubsetSum(vector<int> arr);
TEST_CASE("max array sum 00" ) {

    vector<int> input = {3,7,4,6, 5};

    REQUIRE(maxSubsetSum(input) == 13);
}


TEST_CASE("max array sum 01" ) {

    vector<int> input = {2, 1, 5, 8, 4};

    REQUIRE(maxSubsetSum(input) == 11);
}


TEST_CASE("max array sum 02" ) {

    vector<int> input = {3, 5, -7, 8, 10};

    REQUIRE(maxSubsetSum(input) == 15);
}

TEST_CASE("max array sum 03" ) {

    vector<int> input = {3};

    REQUIRE(maxSubsetSum(input) == 3);
}

TEST_CASE("max array sum 04" ) {

    vector<int> input = {3, 5};

    REQUIRE(maxSubsetSum(input) == 5);
}

TEST_CASE("max array sum 05" ) {

    vector<int> input = {5, 3};

    REQUIRE(maxSubsetSum(input) == 5);
}

TEST_CASE("max array sum 06" ) {

    vector<int> input = {-2, 1, 3,-4, 5};

    REQUIRE(maxSubsetSum(input) == 8);
}
