#include <bits/stdc++.h>
using namespace std;
int n, k, x;
vector<int> v;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    while (n--) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<>());
    cout << v[k-1];
}