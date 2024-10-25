#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        int i;
        cin >> i;
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    for (auto i : v) cout << i << '\n';
}