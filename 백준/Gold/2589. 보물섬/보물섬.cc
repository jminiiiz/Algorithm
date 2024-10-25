#include <bits/stdc++.h>
using namespace std;
int n, m, res, vis[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char a[51][51];
void bfs(int x, int y) {
    memset(vis, 0, sizeof(vis));
    vis[x][y] = 1;
    queue<pair<int, int>> q;
    q.push({x, y});
    while (!q.empty()) {
        tie(x, y) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (a[nx][ny] == 'W' || vis[nx][ny]) continue;
            vis[nx][ny] = vis[x][y] + 1;
            q.push({nx, ny});
            res = max(res, vis[nx][ny]);
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'L') bfs(i, j);
        }
    }
    cout << res - 1;
}