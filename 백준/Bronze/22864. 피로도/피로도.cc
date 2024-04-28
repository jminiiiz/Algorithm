#include <bits/stdc++.h>
using namespace std;
int a, b, c, m, work, fatigue;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> c >> m;
    for (int i = 0; i < 24; i++) {
        if (fatigue + a <= m) {
            work += b;
            fatigue += a;
        }
        else {
            fatigue -= c;
            if (fatigue < 0) fatigue = 0;
        }
    }
    cout << work;
}