#include <bits/stdc++.h>
using namespace std;

int a[100][100], e[100][100], visited[100][100], n, tmp, ret = 1;
int dy[4] = {-1, 0, 1, 0} , dx[4] = {0, 1, 0, -1};

void dfs(int x, int y, int d) {
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
        if (!visited[nx][ny] && a[nx][ny] > d) dfs(nx, ny, d);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int d = 1; d < 101; d++) {
        fill(&visited[0][0], &visited[0][0] + 100 * 100, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(a[i][j] > d && !visited[i][j]) {
                    dfs(i, j, d);
                    cnt++;
                }
            }
        }
        ret = max(ret, cnt);
    }
    cout << ret << "\n";
    return 0;
}
