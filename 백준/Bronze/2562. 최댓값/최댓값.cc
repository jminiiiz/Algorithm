#include <bits/stdc++.h>
using namespace std;
int n, maxValue, maxIndex;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    for (int i = 1; i <= 9; i++) {
        cin >> n;
        if (maxValue < n) {
            maxValue = n;
            maxIndex = i;
        }
    }
    cout << maxValue << "\n" << maxIndex;
}