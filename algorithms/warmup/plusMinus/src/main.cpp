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
    int pos_num = 0, neg_num = 0, zeros_num = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
        if (arr[arr_i] > 0) {
            pos_num++;
        } else if (arr[arr_i] < 0) {
            neg_num++;
        } else {
            zeros_num++;
        }
    }
    cout << (double) pos_num / n << endl;
    cout << (double) neg_num / n << endl;
    cout << (double) zeros_num / n << endl;
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



