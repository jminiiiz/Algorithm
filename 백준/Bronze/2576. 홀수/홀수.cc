#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;
        if (n % 2 == 1) v.push_back(n);
    }
    if(v.empty()) cout << -1;
    else {
        int cnt = 0;
        for (auto i : v) cnt = cnt + i;
        cout << cnt << "\n" << *min_element(v.begin(), v.end());
    }
}