//
// Created by Massimo Biancalani on 23/09/16.
//

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

void solution() {
    int n;
    long sum = 0;
    cin >> n;
    vector<long> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }

    for(int arr_i = 0;arr_i < n;arr_i++){
        sum += arr[arr_i];
    }
    cout << sum << endl;
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



