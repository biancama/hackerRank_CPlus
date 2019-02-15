//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>

using namespace std;
unsigned long countAInString(const string& stringWithA, unsigned long trimLimit);


unsigned long countAInString(const string& stringWithA, unsigned long trimLimit) {
    int result = 0;
    for (int i = 0; i < trimLimit ; ++i) {
        if (stringWithA.at(i) == 'a') {
            result++;
        }
    }
    return result;
}

void repeated_string_solution() {
    string s;
    unsigned long n;
    cin >> s;
    cin >> n;
    unsigned long aInAStringForFull = countAInString(s, s.length());
    unsigned long aInAStringForLastOne = countAInString(s, n % s.length());
    unsigned long sum = (n / s.length()) * aInAStringForFull + aInAStringForLastOne;

    cout << sum ;
}


/**
 *
 * @return
 *  uncomment this for test on the site
 **
int main(){
    solution();
    return 0;
}

 */



