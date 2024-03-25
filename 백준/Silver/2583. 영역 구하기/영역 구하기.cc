#include <bits/stdc++.h>
using namespace std;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int m, n, k;
int board[102][102], vis[102][102];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> m >> n >> k;
    while (k--) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        for (int i = ly; i < ry; i++) {
            for (int j = lx; j < rx; j++) {
                board[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    vector<int> ans;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1 || vis[i][j] == 1) continue;
            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({i, j});
            int width = 1;
            cnt++;
            while (!q.empty()) {
                auto cur = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                    if (board[nx][ny] == 1 || vis[nx][ny] == 1) continue;
                    q.push({nx, ny});
                    vis[nx][ny] = 1;
                    width++;
                }
            }
            ans.push_back(width);
        }
    }
    sort(ans.begin(), ans.end());
    cout << cnt << "\n";
    for (int i : ans) cout << i << " ";
}