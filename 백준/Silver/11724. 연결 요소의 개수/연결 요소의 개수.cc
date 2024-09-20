#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[1001][1001];
bool visited[1001];
queue<int> q;
void bfs(int x) {
    q.push(x);
    visited[x] = true;
    while (!q.empty()) {
        x = q.front(); q.pop();
        for (int i = 1; i <= n; i++) {
            if (arr[x][i] == 1 && visited[i] == false) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = true;
        arr[y][x] = true;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            bfs(i);
            cnt++;
        }
    }
    cout << cnt << '\n';
}