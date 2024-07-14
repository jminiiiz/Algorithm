#include <bits/stdc++.h>
using namespace std;
int n, t, p, cnt, arr[6];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < 6; i++) cin >> arr[i];
    cin >> t >> p;
    for (int i = 0; i < 6; i++) {
        if (arr[i] % t == 0) cnt += arr[i] / t;
        else cnt += arr[i] / t + 1;
    }
    cout << cnt << "\n";
    cout << n / p << " " << n % p;
}