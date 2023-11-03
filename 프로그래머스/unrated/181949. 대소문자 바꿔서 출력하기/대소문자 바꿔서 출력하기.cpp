#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (auto s : str) {
        if (s >= 65 && s <= 90) {
            s += 32;
        }
        else if (s >= 97 && s <= 122) {
            s -= 32;
        }
        cout << s;
    }
    return 0;
}