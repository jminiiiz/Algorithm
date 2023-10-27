#include <bits/stdc++.h>
using namespace std;

int N;
string s, t, pre, suf;
int main() {
    cin >> N;
    cin >> s;
    int pos = s.find('*');
    pre = s.substr(0, pos);
    suf = s.substr(pos + 1);
    for (int i = 0; i < N; i++) {
        cin >> t;
        if (pre.size() + suf.size() > t.size()) {
            cout << "NE\n";
        }
        else {
            if (pre == t.substr(0, pre.size()) && suf == t.substr(t.size() - suf.size())) cout << "DA\n";
            else cout << "NE\n";
        }
    }
    return 0;
}