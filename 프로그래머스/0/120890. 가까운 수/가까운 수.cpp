#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr, int n) {
    int min_num = 101;
    int num = 0;
    for (int i : arr) {
        int diff = abs(i - n);
        if (diff < min_num || (diff == min_num && i < num)) {
            min_num = diff;
            num = i;
        }
    }
    return num;
}