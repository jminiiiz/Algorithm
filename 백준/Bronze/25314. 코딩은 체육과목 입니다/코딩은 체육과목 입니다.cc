#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    if (n % 4 == 0) {
        for (int i = 0; i < n / 4; i++) {
            cout << "long ";
        }
        cout <<  "int\n";
    } else {
        for (int i = 0; i < n / 4 + 1; i++) {
            cout << "long ";
        }
        cout << "int\n";
    }
}