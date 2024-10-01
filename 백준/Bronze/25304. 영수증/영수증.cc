#include <bits/stdc++.h>
using namespace std;
int x, n, tot;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> x >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        tot += (a * b);
    }
    if (x == tot) cout << "Yes";
    else cout << "No";
}