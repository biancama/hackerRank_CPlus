//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>

unsigned int satisfactory_check(int a, int b, int n);

using namespace std;
unsigned int gcd(unsigned int a, unsigned int b) {
    return b == 0 ? a : gcd(b, a % b);
}
void satisfactory_solution() {
    unsigned int n, result = 0;

    cin >> n ;
    for (int a = 1; a < n ; ++a) {
        for (int b = a + 1; b <= n - a ; ++b) {
            result += satisfactory_check(a, b, n);
        }
    }

    cout << result;
}
/*
unsigned int check(unsigned int a, unsigned int b, unsigned int n) {
    int x = n/a;
    while(x > 0) {
        if((n - a * x) > 0 && (n - a * x) % b == 0) {
            return 1;
        }
        x--;
    }
    return 0;
}
*/


unsigned int satisfactory_check(int a, int b, int n) {
    int x1, y1, x2, y2;
    if (n % a == 0) {
        x1 = n / a;
        y1 = 0;
    } else {

        unsigned count = 1;
        bool found = false;
        while(!found) {
            if (count > b) {
                return 0;
            }
            x1 = n/a + count;
            if ( (n - a*x1 ) % b == 0){
                y1 = (n - a*x1 ) / b;
                found = true;
            } else {
                count++;
            }
        }

    }
    if (n % b == 0) {
        x2 = 0;
        y2 = n/b;
    } else {
        unsigned count = 1;
        bool found = false;
        while(!found) {
            if (count > a) {
                return 0;
            }
            y2 = n/b + count;
            if ( (n - b*y2 ) % a == 0){
                x2 = (n - b*y2) / a;
                found = true;
            } else {
                count++;
            }
        }
    }

    unsigned at = abs(x1 - x2);
    unsigned bt = abs(y1 - y2);
    return  gcd(at, bt) > 1;
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



