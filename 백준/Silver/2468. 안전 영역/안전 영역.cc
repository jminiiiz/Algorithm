#include <bits/stdc++.h>
using namespace std;
int board[102][102];
bool vis[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, maxlimit, maxcnt;
void bfs(int x, int y, int limit) {
    queue<pair<int, int>> q;
    vis[x][y] = true;
    q.push({x, y});
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (vis[nx][ny] == 0 && board[nx][ny] > limit) {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            maxlimit = max(board[i][j], maxlimit);
        }
    }
    for (int limit = 0; limit <= maxlimit; limit++) {
        for (int i = 0; i < n; i++) {
            fill(vis[i], vis[i] + n, 0);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] > limit && !vis[i][j]) {
                    bfs(i, j, limit);
                    cnt++;
                }
            }
        }
        maxcnt = max(cnt, maxcnt);
    }
    cout << maxcnt;
}