#include <bits/stdc++.h>
using namespace std;
int n;
string a[101];
string quad(int y, int x, int size) {
    if (size == 1) return string(1, a[y][x]);
    string res = "";
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (a[y][x] != a[i][j]) {
                res += '(';
                res += quad(y, x, size/2);
                res += quad(y, x + size/2, size/2);
                res += quad(y + size/2, x, size/2);
                res += quad(y + size/2, x + size/2, size/2);
                res += ')';
                return res;
            }
        }
    }
    return string(1, a[y][x]);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << quad(0, 0, n);
}