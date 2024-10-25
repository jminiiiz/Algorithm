#include <bits/stdc++.h>
using namespace std;
int n, m, j, k, cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> j;
    int l = 1;
    while (j--) {
        int r = l + m - 1;
        cin >> k;
        if (k >= l && k <= r) continue;
        else {
            if (k < l) {
                cnt += l - k;
                l = k;
            } else {
                l += k - r;
                cnt += k - r;
            }
        }
    }
    cout << cnt;
}