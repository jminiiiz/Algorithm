#include <bits/stdc++.h>
using namespace std;
int n, x;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    vector<int> v(10001, 0);
    while (n--) {
        cin >> x;
        v[x]++;
    }
    for (int i = 1; i <= 10000; i++) {
        while (v[i] > 0) {
            cout << i << '\n';
            v[i]--;
        }
    }
}