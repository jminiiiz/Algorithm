#include <bits/stdc++.h>
using namespace std;
int n;
deque<int> d;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "push_front") {
            int x;
            cin >> x;
            d.push_front(x);
        }
        else if (s == "push_back") {
            int x;
            cin >> x;
            d.push_back(x);
        }
        else if (s == "pop_front") {
            if (d.empty()) cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (s == "pop_back") {
            if (d.empty()) cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (s == "size") {
            cout << d.size() << "\n";
        }
        else if (s == "empty") {
            cout << d.empty() << "\n";
        }
        else if (s == "front") {
            if (d.empty()) cout << -1 << "\n";
            else cout << d.front() << "\n";
        }
        else {
            if (d.empty()) cout << -1 << "\n";
            else cout << d.back() << "\n";
        }
    }
}