//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>

using namespace std;

void solution() {
    unsigned int x_1, x_2, v_1, v_2;


    cin >> x_1 >> v_1 >> x_2 >> v_2;
    if (v_1 == v_2) {
        if (x_1 == x_2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        long long k = (x_2 - x_1) / (v_1 - v_2);
        if ((x_1 + k * v_1) == (x_2 + k * v_2)){
            cout << "YES" ;
        } else {
            cout << "NO" ;
        }
    }
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



