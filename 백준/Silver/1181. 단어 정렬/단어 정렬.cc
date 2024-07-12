#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
bool compare(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());
    for (auto i : v) cout << i << '\n';
}