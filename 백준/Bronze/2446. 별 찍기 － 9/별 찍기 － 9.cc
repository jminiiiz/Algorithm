#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) cout << " ";
        for (int k = 1; k <= 2 * (n - i + 1) - 1; k++) cout << "*";
        cout << '\n';
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << '\n';
    }
}