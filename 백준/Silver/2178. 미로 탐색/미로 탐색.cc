#include <bits/stdc++.h>
using namespace std;
int n, m, vis[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string board[101];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> board[i];
    queue<pair<int, int>> q;
    vis[0][0] = 1;
    q.push({0, 0});
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] == '0' || vis[nx][ny]) continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }
    cout << vis[n-1][m-1];
}