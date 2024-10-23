#include <bits/stdc++.h>
using namespace std;
int arr[9][9];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }
    int maxNumber = -1;
    int x = -1;
    int y = -1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > maxNumber) {
                maxNumber = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << maxNumber << '\n' << x + 1 << ' ' << y + 1;
}