#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; i++) {
        ans += arr[i] * (n - i);
    }
    cout << ans;
}