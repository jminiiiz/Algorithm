#include <bits/stdc++.h>
using namespace std;
int n, s, m, l, xl, xxl, xxxl, t, p, cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s >> m >> l >> xl >> xxl >> xxxl >> t >> p;
    cnt += (s / t) + 1;
    cnt += (m / t) + 1;
    cnt += (l / t) + 1;
    cnt += (xl / t) + 1;
    cnt += (xxl / t) + 1;
    cnt += (xxxl / t) + 1;
    if (s % t == 0) cnt--;
    if (m % t == 0) cnt--;
    if (l % t == 0) cnt--;
    if (xl % t == 0) cnt--;
    if (xxl % t == 0) cnt--;
    if (xxxl % t == 0) cnt--;
    cout << cnt << "\n";
    cout << n / p << " " << n % p;
}