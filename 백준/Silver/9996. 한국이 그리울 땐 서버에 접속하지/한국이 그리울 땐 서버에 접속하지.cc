#include <bits/stdc++.h>
using namespace std;
int n;
string s, t;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    int pos = s.find('*');
    string pre = s.substr(0, pos);
    string suf = s.substr(pos + 1);
    while (n--) {
        cin >> t;
        if (pre.size() + suf.size() > t.size()) {
            cout << "NE\n";
        }
        else {
            if (pre == t.substr(0, pre.size()) && suf == t.substr(t.size() - suf.size()))
                cout << "DA\n";
            else cout << "NE\n";
        }
    }
}