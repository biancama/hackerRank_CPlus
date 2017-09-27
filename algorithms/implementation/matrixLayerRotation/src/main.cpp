//
// Created by Massimo Biancalani on 23/09/16.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solution() {
    int m,n, r, min_row_col;
    cin >> m >> n >> r;
    min_row_col = min (m, n);
    unsigned int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < min_row_col / 2; i++) {
        vector<int> ring;
        for (int j = i; j < m - i; j++) { // first column
            ring.push_back(matrix[j][i]);
        }

        for (int j = i + 1 ; j < n - i; j++) { // last row
            ring.push_back(matrix[m - 1 - i][j]);
        }

        for (int j = m - 2 - i; j >= i; j--) { // last column
            ring.push_back(matrix[j][n - 1 - i]);
        }

        for (int j =  n - 2 - i; j > i; j--) { // first row
            ring.push_back(matrix[i][j]);
        }
        /*
        if (i == min_row_col/2 - 1 ) {
        for (vector<int>::iterator it = ring.begin(); it != ring.end(); it++ ) {
            cout << *it << ' ';
        }
        cout << endl;

        }

             */
        int counter = (ring.size() - r%ring.size()) % ring.size();
        for (int j = i; j < m - i; j++) { // first column
            /*
            if (i == min_row_col/2 - 1 ) {
                cout << counter <<": " << ring[counter] << ' ' << j << ' ' << i << endl;
            }
            */
            matrix[j][i] = ring[counter];
            counter = (counter + 1) % ring.size();
        }
        for (int j = i + 1 ; j < n - i; j++) { // last row
            matrix[m - 1 - i][j] = ring[counter];
            counter = (counter + 1) % ring.size();
        }

        for (int j = m -2 -i; j >= i; j--) { // last column
            matrix[j][n - 1 - i] = ring[counter];
            counter = (counter + 1) % ring.size();
        }

        for (int j =  n - 2 -i; j > i; j--) { // first row
            matrix[i][j] = ring[counter];
            counter = (counter + 1) % ring.size();;
        }
    }
    //cout << " -------------------------  " << endl;

    for (int k = 0; k < m; k++) {
        for (int f = 0; f < n; f++) {
            cout << matrix[k][f] << ' ';
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



