#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    int dp[44] = {0, 1, 1};
    for (int i = 3; i < 44; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) cout << 1 << " " << 0 << "\n";
        else if (x == 1) cout << 0 << " " << 1 << "\n";
        else cout << dp[x - 1] << " " << dp[x] << "\n";
    }
}