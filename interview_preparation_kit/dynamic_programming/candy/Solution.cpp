#include <vector>
//
// Created by Massimo Biancalani on 10/10/2018.
//
using namespace std;

long candies(int n, vector<int> arr) {
    long result = 0;
    vector<int> app(n);
    app[0] = 1;
    for (int i = 1; i < n ; ++i) {
        if (arr[i] > arr[i-1]) {
            app[i] = app[i-1] +1;
        } else {
            app[i] = 1;
        }
    }


    for (int i = n - 2; i >= 0 ; --i) {
        if (arr[i] > arr[i+1] && app[i] <= app[i+1]) {
            app[i] = app[i+1] + 1;
        }
    }
    for (int i = 0; i < app.size(); ++i) {
        result += app[i];
    }

    return result;

}