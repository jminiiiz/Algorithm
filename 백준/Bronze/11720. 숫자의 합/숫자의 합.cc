#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)  {
        cnt += s[i] - '0';
    }
    cout << cnt;
}