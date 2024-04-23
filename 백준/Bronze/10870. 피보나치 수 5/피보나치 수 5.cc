#include <bits/stdc++.h>
using namespace std;
int n;
int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int pp = 0, p = 1, result = 0;
    for (int i = 2; i <= n; i++) {
        result = p + pp;
        pp = p;
        p = result;
    }
    return result;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    int result = fibo(n);
    cout << result;
    return 0;
}