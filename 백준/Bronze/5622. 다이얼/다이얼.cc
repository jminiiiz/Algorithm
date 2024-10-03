#include <bits/stdc++.h>
using namespace std;
int cnt, arr[26];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 26; i++) {
        if (i < 3) arr[i] = 3;
        else if (i < 6) arr[i] = 4;
        else if (i < 9) arr[i] = 5;
        else if (i < 12) arr[i] = 6;
        else if (i < 15) arr[i] = 7;
        else if (i < 19) arr[i] = 8;
        else if (i < 22) arr[i] = 9;
        else arr[i] = 10;
    }
    string str = "";
    cin >> str;
    for (auto c : str) {
        cnt += arr[c - 65];
    }
    cout << cnt;
}