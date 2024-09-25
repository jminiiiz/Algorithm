#include <bits/stdc++.h>
using namespace std;
string s;
int m;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s;
    list<char> l;
    for (auto c : s) l.push_back(c);
    auto cursor = l.end();
    cin >> m;
    while (m--) {
        char op;
        cin >> op;
        if (op == 'L') {
            if (cursor != l.begin()) cursor--;
        } else if (op == 'D') {
            if (cursor != l.end()) cursor++;
        } else if (op == 'B') {
            if (cursor != l.begin()) {
                cursor--;
                cursor = l.erase(cursor);
            }
        } else {
            char add;
            cin >> add;
            l.insert(cursor, add);
        }
    }
    for (auto c : l) cout << c;
}