#include <bits/stdc++.h>
using namespace std;
int t, n, m, k, board[51][51];
bool vis[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
void dfs(int x, int y) {
    vis[x][y] = true;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
        if (board[nx][ny] == 1 && !vis[nx][ny]) {
            dfs(nx, ny);
        }
    }
}
int main() {
    cin >> t;
    while (t--) {
        cin >> m >> n >> k;
        while (k--) {
            int x, y;
            cin >> x >> y;
            board[x][y] = 1;
        }
        int ret = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 1 && !vis[i][j]) {
                    ret++;
                    dfs(i, j);
                }
            }
        }
        cout << ret << '\n';
        for (int i = 0; i < m; i++) {
            fill(board[i], board[i] + n, 0);
            fill(vis[i], vis[i] + n, false);
        }
    }
}