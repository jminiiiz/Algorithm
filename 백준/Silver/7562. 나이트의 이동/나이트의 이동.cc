#include <bits/stdc++.h>
using namespace std;
int dist[302][302];
int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int n, t, x, y, i, j;
queue<pair<int, int>> q;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int u = 0; u < n; u++) fill(dist[u], dist[u] + n, -1);
        cin >> x >> y;
        dist[x][y] = 0;
        q.push({x, y});
        cin >> i >> j;
        while (!q.empty()) {
            auto cur = q.front(); q.pop();
            for (int dir = 0; dir < 8; dir++) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if (dist[nx][ny] >= 0) continue;
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                q.push({nx, ny});
            }
        }
        cout << dist[i][j] << "\n";
    }
}