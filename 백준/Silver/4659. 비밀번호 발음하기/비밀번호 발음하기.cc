#include <bits/stdc++.h>
using namespace std;
string s;
bool isVowel(int idx) {
    return idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while (true) {
        cin >> s;
        if (s == "end") break;
        int l = 0, v = 0;
        bool flag = 0, isInclude = 0;
        int prev = -1;
        for (int i = 0; i < s.size(); i++) {
            int idx = s[i];
            if (isVowel(idx)) l++, v = 0, isInclude = 1;
            else v++, l = 0;
            if (v == 3 || l == 3) flag = 1;
            if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')) flag = 1;
            prev = idx;
        }
        if (!isInclude) flag = 1;
        if (flag) cout << "<" << s << "> is not acceptable.\n";
        else cout << "<" << s << "> is acceptable.\n";
    }
}