#include <bits/stdc++.h>
using namespace std;
int n, k, res;
vector<int> v;
void dfs(int num, int ten) {
    if (n < num) return;
    res = max(res, num);
    for (int i = 0; i < v.size(); i++) {
        dfs(num+v[i] * ten, ten* 10);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    while (k--) {
        int i;
        cin >> i;
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    dfs(0, 1);
    cout << res;
}