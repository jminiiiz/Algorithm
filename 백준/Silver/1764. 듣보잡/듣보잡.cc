#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<string> notHeard;
vector<string> notSeen;
vector<string> ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    while (n--) {
        string s;
        cin >> s;
        notHeard.push_back(s);
    }
    while (m--) {
        string s;
        cin >> s;
        notSeen.push_back(s);
    }
    sort(notHeard.begin(), notHeard.end());
    sort(notSeen.begin(), notSeen.end());
    set_intersection(notHeard.begin(), notHeard.end(), notSeen.begin(), notSeen.end(), back_inserter(ans));
    cout << ans.size() << "\n";
    for (auto s : ans) cout << s << "\n";
}