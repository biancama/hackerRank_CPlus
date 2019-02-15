//
// Created by Massimo Biancalani on 23/09/16.
//

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

void diagonal_difference_solution() {
    int n;
    cin >> n;
    int sum =0;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
        for(int a_j = 0;a_j < n;a_j++){
            cin >> a[a_i][a_j];
        }
    }

    for(int i = 0; i < n;i++){
        sum += a[i][i] - a[i][n - 1 - i];
    }
    cout << abs(sum) << endl;
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



