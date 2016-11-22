//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void solution() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i -1; j++) {
            cout << ' ';
        }
        for(int j = 0; j < i + 1; j++) {
            cout << '#';
        }
        cout << endl;
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



