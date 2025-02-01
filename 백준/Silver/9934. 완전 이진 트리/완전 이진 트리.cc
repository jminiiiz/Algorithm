#include <bits/stdc++.h>
using namespace std;
int k, a[1025];
vector<int> v[11];
void go(int s, int e, int l) {
    if (s > e) return;
    if (s == e) {
        v[l].push_back(a[s]);
        return;
    }
    int m = (s + e) / 2;
    v[l].push_back(a[m]);
    go(s, m - 1, l + 1);
    go(m + 1, e, l + 1);
    return;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> k;
    int n = (int)pow(2, k) - 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    go(0, n, 1);
    for (int i = 1; i <= k; i++) {
        for (auto j : v[i]) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}