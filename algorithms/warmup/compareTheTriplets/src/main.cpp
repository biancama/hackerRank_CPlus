//
// Created by Massimo Biancalani on 23/09/16.
//

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;
void add_point (int a, int b, int& a_point, int& b_point ) {
    if (a > b) {
        a_point++;
    } else if (b > a) {
        b_point++;
    }
}

void solution() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int a_point = 0, b_point = 0;
    add_point(a0, b0, a_point, b_point);
    add_point(a1, b1, a_point, b_point);
    add_point(a2, b2, a_point, b_point);
    cout << a_point << ' ' << b_point << endl;
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



