#include <bits/stdc++.h>
using namespace std;
int sum, a[5];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+5);
    cout << (int)sum/5 << '\n' << a[2];
}