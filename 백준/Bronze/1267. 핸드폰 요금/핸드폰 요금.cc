#include <bits/stdc++.h>
using namespace std;
int n, Y, M, tmp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        Y += (tmp / 30 + 1) * 10;
        M += (tmp / 60 + 1) * 15;
    }
    if (Y > M) cout << "M " << M;
    else if (Y < M) cout << "Y " << Y;
    else cout << "Y M " << Y;
}