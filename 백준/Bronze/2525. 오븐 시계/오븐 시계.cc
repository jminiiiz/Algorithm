#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> c;
    int minute = b + (a * 60) + c;
    int time = minute / 60;
    minute %= 60;
    if (time > 24) time -= 24;
    else if (time == 24) time = 0;
    cout << time << ' ' << minute;
}