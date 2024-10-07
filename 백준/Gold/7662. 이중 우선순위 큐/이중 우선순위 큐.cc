#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        multiset<int> ms;
        while (k--) {
            char com; cin >> com;
            int n; cin >> n;
            if (com == 'D') {
                if (ms.empty()) continue;
                if (n == 1) ms.erase(prev(ms.end()));
                else ms.erase(ms.begin());
            } else {
                ms.insert(n);
            }
        }
        if (ms.empty()) cout << "EMPTY\n";
        else
            cout << *prev(ms.end()) << ' ' << *ms.begin() << '\n';
    }
}