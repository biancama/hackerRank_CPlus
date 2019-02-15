//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string long_fact(int n);

void extra_long_factorial_solution() {
    int n;
    cin >> n;
    string result = long_fact(n);
    cout << result;
}
string long_fact(int n) {
    vector<int> decimal_representation;
    decimal_representation.push_back(1);
    int carry = 0;

    for ( int k = 2; k <= n; k++) {
        for (auto &&item : decimal_representation) {
            int multiply = item * k + carry;
            item = multiply  % 10 ;
            carry = multiply / 10;
        }
        while ( carry > 0) {
            decimal_representation.push_back(carry % 10);
            carry /= 10 ;
        }
    }
    string result;
    for (auto it = decimal_representation.rbegin(); it != decimal_representation.rend(); ++it ) {
        result.append(to_string(*it));
    }

    return result;
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



