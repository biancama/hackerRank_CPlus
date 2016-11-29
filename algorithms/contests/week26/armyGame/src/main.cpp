//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>

using namespace std;

void solution() {
    unsigned int n, m, factor_n = 0, factor_m;


    cin >> n >> m ;
    factor_n = n / 2 + n % 2;
    factor_m = m / 2 + m % 2;

    cout << factor_n * factor_m;
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



