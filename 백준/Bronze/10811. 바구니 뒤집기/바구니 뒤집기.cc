#include <bits/stdc++.h>
using namespace std;
int n, m, i, j;
int arr[104];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int l = 0; l <= n; l++) arr[l] = l;
    while (m--) {
        cin >> i >> j;
        reverse(arr+i, arr+j+1);
    }
    for (int l = 1; l <= n; l++) cout << arr[l] << ' ';
}