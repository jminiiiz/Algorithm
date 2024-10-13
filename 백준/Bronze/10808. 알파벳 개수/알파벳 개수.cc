#include <bits/stdc++.h>
using namespace std;
string s;
int a[26];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s;
    for (auto c : s) a[c-97]++;
    for (auto i : a) cout << i << ' ';
}