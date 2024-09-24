#include <bits/stdc++.h>
using namespace std;
int func(int n, int r, int c) {
    if (n == 0) return 0;
    int h = 1 << (n - 1);
    if (r < h && c < h) return func(n - 1, r, c);
    if (r < h && c >= h) return h*h + func(n - 1, r, c - h);
    if (r >= h && c < h) return 2*h*h + func(n - 1, r - h, c);
    return 3*h*h + func(n - 1, r - h, c - h);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, r, c;
    cin >> n >> r >> c;
    cout << func(n, r, c);
}