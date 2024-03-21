#include <bits/stdc++.h>
using namespace std;
int n;
stack<int> s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (str == "pop") {
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (str == "size") {
            cout << s.size() << "\n";
        }
        else if (str == "empty") {
            if (s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else {
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
}