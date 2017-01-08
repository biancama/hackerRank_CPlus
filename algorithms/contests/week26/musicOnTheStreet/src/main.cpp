//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solution() {
    unsigned int n, m, h_min, h_max, m_temp, index;
    vector<int> a;
    int result=0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a_value;
        cin >> a_value;
        a.insert(a.end(), a_value);
    }
    cin >> m >> h_min >> h_max;
    m_temp = m;
    index = 0;
    result = a[index] - h_max;
    m_temp -= h_max;
    index ++;
    while (m_temp > 0 && index < n) {
        if (a[index] - a[index -1] < h_min) { // skip
            m_temp = m;
            result = a[index];
        } else {
            m_temp -= a[index] - a[index -1];
        }
        index++;
    }
    cout << result;
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



