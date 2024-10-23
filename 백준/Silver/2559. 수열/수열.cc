#include <bits/stdc++.h>
using namespace std;
int n, k, tmp, res = -10000000, psum[100004];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        psum[i] = psum[i-1] + tmp;
    }
    for (int i = k; i <= n; i++) {
        res = max(res, psum[i] - psum[i-k]);
    }
    cout << res;
}