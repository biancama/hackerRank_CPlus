//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <vector>
#include <deque>
#include <cassert>

using namespace std;


void calculate_primes(vector<unsigned int>& v, unsigned int low, unsigned int high);

void solution() {
    unsigned int n, m, result = 0, lst = -1;
    vector<unsigned int> primes;
    cin >> n >> m ;
    assert(m - n >= 0 && m - n <= 1E6);
    calculate_primes(primes, 2, 1E9);

    for (int i = n; i <= m; i++) {
        bool ok = true;
        for (int j = 0; j < primes.size() && primes[j]*primes[j] <= i;
             j++) {
            if (i % primes[j] == 0) {
                ok = false;
                break;
            }
        }

        if (ok && i > 1) {
            result += (lst == i - 2);
            lst = i;
        }
    }
    cout << result;
}


void calculate_primes(vector<unsigned int>& v, unsigned int low, unsigned int high){
    for (int i = low; i*i <= high; i++) {
        bool ok = true;
        for (int j = 2; j*j <= i ; ++j) {
            if ( i % j == 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            v.push_back(i);
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
