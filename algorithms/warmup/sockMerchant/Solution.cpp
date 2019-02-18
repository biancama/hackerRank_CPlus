//
// Created by Massimo Biancalani on 2019-02-18.
//
#include <vector>
#include <map>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    map<int, unsigned int> counterMap;
    unsigned int result = 0;
    for (auto const& element : ar) {
        if (counterMap.count(element) > 0) {
            counterMap[element] = counterMap[element] + 1;
        } else {
            counterMap[element] = 1;
        }
    }
    for (auto iter = counterMap.begin(); iter != counterMap.end() ; ++iter) {
        auto cur = iter->first;
        result += (counterMap[cur] / 2);
    }

    return result;
}