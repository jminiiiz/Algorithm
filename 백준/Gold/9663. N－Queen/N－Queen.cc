#include <bits/stdc++.h>
using namespace std;
bool isused1[40];
bool isused2[40];
bool isused3[40];
int n, cnt;
void fun(int k) {
    if (k == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isused1[i] || isused2[i+k] || isused3[k-i+n-1]) continue;
        isused1[i] = true;
        isused2[i+k] = true;
        isused3[k-i+n-1] = true;
        fun(k+1);
        isused1[i] = false;
        isused2[i+k] = false;
        isused3[k-i+n-1] = false;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    fun(0);
    cout << cnt;
}