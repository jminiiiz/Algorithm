#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i <= n; i++)
        cnt += i;
    cout << cnt;
}