#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        int a[26] = {};
        string s1, s2;
        cin >> s1 >> s2;
        for (auto c : s1) a[c - 'a']++;
        for (auto c : s2) a[c - 'a']--;
        bool isPossible = true;
        for (int i : a) {
            if (i != 0) isPossible = false;
        }
        if (isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}