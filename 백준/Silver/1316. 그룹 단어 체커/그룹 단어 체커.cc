#include <bits/stdc++.h>
using namespace std;
int n, res;
string s;
bool isGroupWord(const string& s) {
    bool visited[26] = {false};
    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && s[i] != s[i - 1] && visited[s[i] - 'a']) {
            return false;
        }
        visited[s[i] - 'a'] = true;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        cin >> s;
        res += isGroupWord(s);
    }
    cout << res;
}