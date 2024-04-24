#include <bits/stdc++.h>
using namespace std;
int n, k, cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int a = 0; a <= n; a++) {
        for (int b = 0; b < 60; b++) {
            for (int c = 0; c < 60; c++) {
                if (a % 10 == k || a / 10 == k ||
                b % 10 == k || b / 10 == k ||
                c % 10 == k || c / 10 == k)
                    cnt++;
            }
        }
    }
    cout << cnt;
}