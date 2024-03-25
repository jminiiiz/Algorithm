#include <bits/stdc++.h>
using namespace std;
int k, cnt;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> k;
    stack<int> s;
    while (k--) {
        int n;
        cin >> n;
        if (n == 0) s.pop();
        else s.push(n);
    }
    while (!s.empty()) {
        cnt += s.top();
        s.pop();
    }
    cout << cnt;
}