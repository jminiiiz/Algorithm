#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t; cin.ignore();
    while (t--) {
        getline(cin, s);
        int max = 0, maxCount = 0, maxIdx, alpha[26] = {0,};
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                alpha[s[i] - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (max < alpha[i]) {
                max = alpha[i];
                maxIdx = i;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (max == alpha[i]) maxCount++;
        }
        if (maxCount == 1) cout << (char)('a' + maxIdx) << "\n";
        else cout << "?\n";
    }
}