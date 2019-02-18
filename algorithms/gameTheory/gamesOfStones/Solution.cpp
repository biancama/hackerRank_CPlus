//
// Created by Massimo Biancalani on 2019-02-15.
//
#include <string>
#include <vector>

using namespace std;
/**
 * https://www.hackerrank.com/challenges/game-of-stones-1/problem
 * 
 * @param n
 * @return
 */
string gameOfStones(int n) {
    vector<bool> firstWinning(n + 1);
    firstWinning[0] = false;
    firstWinning[1] = false;

    for(int i = 2; i <= n ; ++i) {
        if (i < 7) {
            firstWinning[i] = true;
            continue;
        }

       if ((firstWinning[i - 2 - 2] && firstWinning[i - 2 - 3] && firstWinning[i - 2 - 5] )
       || (firstWinning[i - 3 - 2] && firstWinning[i - 3 - 3] && firstWinning[i - 3 - 5] )
       || (firstWinning[i - 5 - 2] && firstWinning[i - 5 - 3] && firstWinning[i - 5 - 5])) {
           firstWinning[i] = true;
       } else {
           firstWinning[i] = false;

       }

    }
    return firstWinning[n] ? "First" : "Second";
}