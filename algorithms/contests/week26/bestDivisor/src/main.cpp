//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct Elem {
    unsigned int divisor;
    unsigned int digitsSum;
};
bool elem_sorter(Elem const& lhs, Elem const& rhs);


void fillDivisors(unsigned int n, vector<Elem>& divisors);

unsigned int digit_sum(int number);

void best_divisor_solution() {
    unsigned int n;
    vector<Elem> divisors;

    cin >> n;
    fillDivisors(n, divisors);
    sort(divisors.begin(), divisors.end(), &elem_sorter);
    cout << divisors[0].divisor;
}

bool elem_sorter(Elem const &lhs, Elem const &rhs) {
    if(lhs.digitsSum == rhs.digitsSum) {
        return lhs.divisor < rhs.divisor;
    } else {
        return lhs.digitsSum > rhs.digitsSum;
    }
}

void fillDivisors(unsigned int n, vector<Elem> &divisors) {
    for (int i = 1; i <= n; ++i){
        if (n % i == 0) {
            Elem elem;
            elem.divisor = i;
            elem.digitsSum = digit_sum(i);
            divisors.insert(divisors.end(), elem);
        }

    }
}

unsigned int digit_sum(int number) {
    unsigned int sum = 0;
    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
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



