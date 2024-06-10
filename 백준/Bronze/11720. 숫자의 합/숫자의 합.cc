#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    for (char a : s) {
        cnt += a - '0';
    }
    cout << cnt;
}