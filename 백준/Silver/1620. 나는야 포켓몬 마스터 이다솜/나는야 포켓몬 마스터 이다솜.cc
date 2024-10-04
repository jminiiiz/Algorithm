#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> sToi;
string iTos[100005];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> iTos[i];
        sToi[iTos[i]] = i;
    }
    while (m--) {
        string q; cin >> q;
        if (isdigit(q[0]))
            cout << iTos[stoi(q)] << '\n';
        else
            cout << sToi[q] << '\n';
    }
}