//
// Created by Massimo Biancalani on 23/09/16.
//
#include <gtest/gtest.h>
#include <vector>


using namespace std;
int formingMagicSquare(vector < vector<int> > s);
TEST(formingMagicSquare, test01) {

    vector< vector<int> > s(3,vector<int>(3));


int result = formingMagicSquare(s);
EXPECT_EQ(result, 1);
}



