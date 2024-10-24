#include <bits/stdc++.h>
using namespace std;
int n, x, y, cnt;
int a[100][100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        cin >> x >> y;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                a[i+x][j+y] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (a[i][j]) cnt++;
        }
    }
    cout << cnt;
}