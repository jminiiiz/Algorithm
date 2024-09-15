#include <bits/stdc++.h>
using namespace std;
int board[502][502];
bool visited[502][502];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }
    int mx = 0; 
    int num = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || visited[i][j]) continue;
            num++;
            queue<pair<int, int>> q;
            visited[i][j] = true;
            q.push({i, j});
            int area = 0;
            while (!q.empty()) {
                area++;
                pair<int, int> cur = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >=n || ny < 0 || ny >= m) continue;
                    if (visited[nx][ny] || board[nx][ny] != 1) continue;
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << "\n" << mx;
}