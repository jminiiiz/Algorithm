#include <bits/stdc++.h>
using namespace std;
int a, b, t;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    int c = 1;
    while (t--) {
       cin >> a >> b;
       cout << "Case #" << c++ << ": " << a + b << "\n";
    }
}