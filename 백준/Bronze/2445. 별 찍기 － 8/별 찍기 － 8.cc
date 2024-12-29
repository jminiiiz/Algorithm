#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int k = 1; k <= 2 * (n - i); k++) cout << " ";
        for (int l = 1; l <= i; l++) cout << "*";
        cout << "\n";
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int k = 1; k <= 2 * (n - i); k++) cout << " ";
        for (int l = 1; l <= i; l++) cout << "*";
        cout << "\n";
    }
}