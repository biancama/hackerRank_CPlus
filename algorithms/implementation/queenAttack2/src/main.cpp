//
// Created by Massimo Biancalani on 23/09/16.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int dist(pair<int, int> x, pair<int, int> y);

bool aligned_with_top(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_top_right(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_right(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_bottom_right(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_bottom(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_bottom_left(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_left(pair<int, int> queen, pair<int, int> obstacle);
bool aligned_with_top_left(pair<int, int> queen, pair<int, int> obstacle);


pair<int, int> min_min_pair(pair<int, int> limit, pair<int, int> obstacle);
pair<int, int> max_min_pair(pair<int, int> limit, pair<int, int> obstacle);
pair<int, int> max_max_pair(pair<int, int> limit, pair<int, int> obstacle);
pair<int, int> min_max_pair(pair<int, int> limit, pair<int, int> obstacle);


void solution() {
    int n;
    int k;

    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    pair<int, int> queen(rQueen, cQueen);
    pair<int, int> top(n + 1, cQueen);
    int n_max = min(n - rQueen, n - cQueen);
    pair<int, int> top_right(rQueen + n_max + 1, cQueen + n_max + 1);
    pair<int, int> right(rQueen, n + 1);
    n_max = min(rQueen - 1, n - cQueen);
    pair<int, int> bottom_right(rQueen - n_max - 1, cQueen + n_max + 1);
    pair<int, int> bottom(0, cQueen);
    n_max = min(rQueen - 1, cQueen -1);
    pair<int, int> bottom_left(rQueen - n_max - 1, cQueen - n_max - 1);
    pair<int, int> left(rQueen, 0);
    n_max = min(n - rQueen, cQueen - 1);
    pair<int, int> top_left(rQueen + n_max + 1, cQueen - n_max - 1);

    for(int a0 = 0; a0 < k; a0++) {
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        pair<int, int> obstacle(rObstacle, cObstacle);
        if (aligned_with_top(queen, obstacle)) {
            top = min_min_pair(top, obstacle);
        } else if (aligned_with_top_right(queen, obstacle)) {
            top_right = min_min_pair(top_right, obstacle);
        } else if (aligned_with_right(queen, obstacle)) {
            right = min_min_pair(right, obstacle);
        } else if (aligned_with_bottom_right(queen, obstacle)) {
            bottom_right = max_min_pair(bottom_right, obstacle);
        } else if (aligned_with_bottom(queen, obstacle)) {
            bottom = max_max_pair(bottom, obstacle);
        } else if (aligned_with_bottom_left(queen, obstacle)) {
            bottom_left = max_max_pair(bottom_left, obstacle);
        } else if (aligned_with_left(queen, obstacle)) {
            left = max_max_pair(left, obstacle);
        } else if (aligned_with_top_left(queen, obstacle)) {
            top_left = min_max_pair(top_left, obstacle);
        }
    }
    int solution = dist(queen, top);
    solution += dist(queen, top_right);
    solution += dist(queen, right);
    solution += dist(queen, bottom_right);
    solution += dist(queen, bottom);
    solution += dist(queen, bottom_left);
    solution += dist(queen, left);
    solution += dist(queen, top_left);
    cout << solution;
}


pair<int, int> min_min_pair(pair<int, int> queen, pair<int, int> obstacle) {
    return pair<int, int>(min(queen.first, obstacle.first), min(queen.second, obstacle.second));
}
pair<int, int> max_min_pair(pair<int, int> queen, pair<int, int> obstacle) {
    return pair<int, int>(max(queen.first, obstacle.first), min(queen.second, obstacle.second));
}
pair<int, int> max_max_pair(pair<int, int> queen, pair<int, int> obstacle) {
    return pair<int, int>(max(queen.first, obstacle.first), max(queen.second, obstacle.second));
}
pair<int, int> min_max_pair(pair<int, int> queen, pair<int, int> obstacle) {
    return pair<int, int>(min(queen.first, obstacle.first), max(queen.second, obstacle.second));
}
bool aligned_with_top(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first < obstacle.first && queen.second == obstacle.second;
}
bool aligned_with_top_right(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first < obstacle.first && obstacle.second - queen.second == obstacle.first - queen.first;
}
bool aligned_with_right(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first == obstacle.first && obstacle.second > queen.second;
}
bool aligned_with_bottom_right(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first > obstacle.first && obstacle.second - queen.second ==  queen.first - obstacle.first;
}
bool aligned_with_bottom(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first > obstacle.first && queen.second == obstacle.second;
}
bool aligned_with_bottom_left(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first > obstacle.first && obstacle.second - queen.second ==  obstacle.first - queen.first;
}
bool aligned_with_left(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first == obstacle.first && obstacle.second < queen.second;
}
bool aligned_with_top_left(pair<int, int> queen, pair<int, int> obstacle){
    return queen.first < obstacle.first && obstacle.second - queen.second == queen.first - obstacle.first;
}
int dist(pair<int, int> limit, pair<int, int> y) {
    return max(abs(limit.first - y.first), abs(limit.second - y.second)) - 1 ;
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



