#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    vector<int> dp;
    dp.push_back(1);
    dp.push_back(2);
    for (int i = 2; i < n; i++) {
        dp.push_back((dp[i-1] + dp[i-2]) % 10007);
    }
    cout << dp[n - 1];
}