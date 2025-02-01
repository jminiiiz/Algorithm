#include <bits/stdc++.h>
using namespace std;
int n, c, arr[1004];
vector<pair<int, int>> v;
map<int, int> mp, mp2;
bool cmp(pair<int, int> x, pair<int, int> y) {
    if (x.first == y.first) {
        return mp2[x.second] < mp2[y.second];
    }
    return x.first > y.first;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; mp[arr[i]]++;
        if (mp2[arr[i]] == 0) mp2[arr[i]] = i + 1;
    }
    for (auto it : mp) {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) {
        for (int j = 0; j < i.first; j++) {
            cout << i.second << " ";
        }
    }
}