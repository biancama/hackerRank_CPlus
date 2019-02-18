#include <string>
//
// Created by Massimo Biancalani on 2019-02-18.
//
using namespace std;
int countingValleys(int n, string s) {
    int level = 0;
    bool startCountingForAValley = false;
    unsigned int result = 0;
    for (auto c : s) {
        switch (c) {
            case 'D':

                if (level == 0) {
                    startCountingForAValley = true;
                }
                level--;
                break;
            case 'U':
                if (level == -1) {
                    if (startCountingForAValley) {
                        result++;
                    }
                    startCountingForAValley = false;
                }
                level++;
                break;
        }
    }
    return result;
}