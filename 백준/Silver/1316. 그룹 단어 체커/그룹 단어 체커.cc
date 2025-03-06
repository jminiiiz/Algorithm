#include <bits/stdc++.h>
using namespace std;
int n, res;
vector<string> v;
bool isGroupWord(string s) {
    bool visited[26] = {0};
    char prev = 0;
    for (char c : s) {
        if (prev != c) {
            if (visited[c - 'a']) return false;
            visited[c - 'a'] = true;
        }
        prev = c;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (string s : v) {
        if (isGroupWord(s)) res++;
    }
    cout << res;
}