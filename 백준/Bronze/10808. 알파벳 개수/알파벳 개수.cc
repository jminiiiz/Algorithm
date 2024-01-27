#include <bits/stdc++.h>
using namespace std;

int a[26];
string s;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for (char c : s) a[c-97]++;
    for (int i = 0; i < 26; i++) cout << a[i] << " ";
    return 0;
}