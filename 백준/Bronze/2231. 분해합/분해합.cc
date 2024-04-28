#include <bits/stdc++.h>
using namespace std;
int n, res;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int sum = i;
        int tmp = i;
        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (n == sum) {
            res = i;
            break;
        }
    }
    cout << res;
}