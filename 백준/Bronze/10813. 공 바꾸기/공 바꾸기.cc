#include <bits/stdc++.h>
using namespace std;
int n, m, a[104];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) a[i] = i;
    while (m--) {
        int i, j;
        cin >> i >> j;
        swap(a[i], a[j]);
    }
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
}