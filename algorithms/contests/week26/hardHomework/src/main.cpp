//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <cmath>
#include <iomanip>

unsigned int check(int a, int b);

using namespace std;


void solution() {
    unsigned int n;
    double result = -3.0;
    int x = 1, y =1, z= 1;
    cin >> n ;

    for (int x = 1; x <= 10000; ++x) {
        for (int y = 1; y <= 10000; ++y) {
            int z = n - x - y;
            if (z < 0) {
                continue;
            }
            double new_max = sin(x) + sin(y) + sin(z);
            if (new_max > result) {
                result = new_max;
            }
        }
    }
    //long double d = sin(5330) + sin(5330) + sin(6040);
    //cout << d << endl;
    cout << fixed<<setprecision(9) << result;
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



