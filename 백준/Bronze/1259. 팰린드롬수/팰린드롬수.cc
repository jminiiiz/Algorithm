#include <bits/stdc++.h>
using namespace std;
int t;
string s1, s2;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while (true) {
        cin >> t;
        if (t == 0) break;
        s1 = to_string(t);
        s2 = s1;
        reverse(s1.begin(), s1.end());
        if (s1 == s2) cout << "yes\n";
        else cout << "no\n";
    }
}