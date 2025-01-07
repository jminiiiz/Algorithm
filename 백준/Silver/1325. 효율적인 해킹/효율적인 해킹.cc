#include <bits/stdc++.h>
using namespace std;
int m, n, a, b, mx, vis[10001], dp[10001];
vector<int> v[10001];

int dfs(int here) {
    vis[here] = 1;
    int ret = 1;
    for (int there : v[here]) {
        if (vis[there]) continue;
        ret += dfs(there);
    }
    return ret;
}

int main() {
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        v[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        memset(vis, 0, sizeof(vis));
        dp[i] = dfs(i);
        mx = max(dp[i], mx);
    }
    for (int i = 1; i <= n; i++) if (mx == dp[i]) cout << i << " ";
}