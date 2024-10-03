#include <bits/stdc++.h>
using namespace std;
int k, n;
int a[10005];
bool sol(long long x) {
    long long cur = 0;
    for (int i = 0; i < k; i++) cur += a[i] / x;
    return cur >= n;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> k >> n;
    for (int i = 0; i < k; i++) cin >> a[i];
    long long st = 1;
    long long en = 0x7fffffff;
    while (st < en) {
        long long mid = (st + en + 1) / 2;
        if (sol(mid)) st = mid;
        else en = mid - 1;
    }
    cout << st;
}