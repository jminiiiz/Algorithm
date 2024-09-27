#include <bits/stdc++.h>
using namespace std;
int n, s, cnt;
int arr[30];
void fun(int k, int tot) {
    if (k == n) {
        if (tot == s) cnt++;
        return;
    }
    fun(k+1, tot);
    fun(k+1, tot+arr[k]);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> arr[i];
    fun(0, 0);
    if (s == 0) cnt--;
    cout << cnt;
}