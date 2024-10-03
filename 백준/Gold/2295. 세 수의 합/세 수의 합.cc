#include <bits/stdc++.h>
using namespace std;
int n;
int a[1004];
vector<int> two;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            two.push_back(a[i]+a[j]);
    }
    sort(two.begin(), two.end());
    for (int l = n-1; l > 0; l--) {
        for (int k = 0; k < l; k++) {
            if (binary_search(two.begin(), two.end(), a[l] - a[k])) {
                cout << a[l];
                return 0;
            }
        }
    }
}