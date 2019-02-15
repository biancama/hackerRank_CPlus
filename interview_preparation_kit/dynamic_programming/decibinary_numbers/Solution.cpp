//
// Created by Massimo Biancalani on 14/10/2018.
//


#include <cmath>

long decibinaryToDecimal(long k) {
    auto counter = 0;
    long result = 0;
    while (k > 0) {
        int module = k % 10;
        result += module * pow(2, counter);
        counter++;
        k /= 10;
    }
    return result;
}

long decibinaryNumbers(long x) {


    return 0;

}