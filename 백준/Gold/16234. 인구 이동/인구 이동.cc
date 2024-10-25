#include <bits/stdc++.h>
using namespace std;
int n, l, r, sum, cnt, vis[51][51], a[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<pair<int, int>> v;
void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || vis[nx][ny]) continue;
        if (abs(a[nx][ny] - a[x][y]) >= l && abs(a[nx][ny] - a[x][y]) <= r) {
            vis[nx][ny] = 1;
            v.push_back({nx, ny});
            sum += a[nx][ny];
            dfs(nx, ny);
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    while (true) {
        bool flag = 0;
        fill(&vis[0][0], &vis[0][0] + 51 * 51, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j]) {
                    v.clear();
                    vis[i][j] = 1;
                    v.push_back({i, j});
                    sum = a[i][j];
                    dfs(i, j);
                    if (v.size() == 1) continue;
                    for (auto b : v) {
                        a[b.first][b.second] = sum / v.size();
                        flag = 1;
                    }
                }
            }
        }
        if (!flag) break;
        cnt++;
    }
    cout << cnt;
}