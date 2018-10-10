//
// Created by Massimo Biancalani on 06/10/2018.
//
#include <string>
#include <vector>
using namespace std;

string abbreviation(string a, string b) {
    vector<vector<bool>> matrix(a.size() + 1, vector<bool> (b.size() + 1));
    for (int i = 0; i <= a.size(); i++) {
        for (int j = 0; j <= b.size(); ++j) {
            if (i == 0) {
                if (j == 0) {
                    matrix[i][j] = true;
                } else {
                    matrix[i][j] = false;
                }
            } else {
                    bool isFound = false;
                    if (a[i-1] <= 'z' && a[i-1] >= 'a') {
                        if (toupper(a[i-1]) == b[j -1]) {  // try to make it upper case
                            isFound = matrix[i -1][j-1];
                            matrix[i][j] = matrix[i-1][j-1];
                        }
                        if (!isFound) { // delete the character
                            matrix[i][j] = matrix[i-1][j];
                        }
                    } else {
                        if (j == 0) {
                            matrix[i][j] = false;
                        } else {
                            matrix[i][j] = a[i-1] == b[j-1] && matrix[i-1][j-1];
                        }
                    }
                }
            }

        }

    return matrix[a.size()][b.size()] ? "YES" : "NO";
}
