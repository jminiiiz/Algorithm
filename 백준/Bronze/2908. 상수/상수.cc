#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n) {
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << max(reverseNumber(a), reverseNumber(b));
}