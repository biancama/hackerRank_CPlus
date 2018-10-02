#include <vector>
using namespace std;

int maxSubsetSum(vector<int> arr) {
    int N = arr.size();
    vector<int> calculationArr(N, 0);
    if (N ==1) {
        return arr[0];
    }
    calculationArr[0] = max(arr[0], 0);
    calculationArr[1] = max(arr[0], arr[1]);

    for (int i = 2; i < N; ++i) {
        calculationArr[i] = max(calculationArr[i-2], max(calculationArr[i-2] + arr[i], calculationArr[i-1]));
    }
    return max(calculationArr[N-1], calculationArr[N-2]);

}
