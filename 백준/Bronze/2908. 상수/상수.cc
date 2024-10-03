#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << max(reverseNumber(a), reverseNumber(b));
}