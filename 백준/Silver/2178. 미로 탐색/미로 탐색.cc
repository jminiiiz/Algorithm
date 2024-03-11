#include <bits/stdc++.h>
using namespace std;
#define MAX 104
string grid[MAX];
int visited[MAX][MAX];
int N, M, x, y;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> grid[i];
    for (int i = 0; i < N; i++) fill(visited[i], visited[i] + M, -1);
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 0;
    while (!q.empty()) {
        tie(x, y) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;;
            if (visited[nx][ny] >= 0 || grid[nx][ny] != '1') continue;
            visited[nx][ny] = visited[x][y] + 1;
            q.push({nx, ny});
        }
    }
    cout << visited[N-1][M-1] + 1;
}