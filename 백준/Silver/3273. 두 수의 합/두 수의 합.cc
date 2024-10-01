#include <bits/stdc++.h>
using namespace std;
int n, x, cnt;
int a[100004];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    sort(a, a + n);
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = a[left] + a[right];
        if (sum == x) {
            cnt++;
            left++;
            right--;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }
    cout << cnt;
}