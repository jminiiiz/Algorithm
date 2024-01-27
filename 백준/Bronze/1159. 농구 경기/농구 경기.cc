#include <bits/stdc++.h>
using namespace std;
int N, arr[26];
string s, ret;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        arr[s[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) if (arr[i] >= 5) ret += i + 'a';
    if (ret.size()) cout << ret;
    else cout << "PREDAJA";
    return 0;
}