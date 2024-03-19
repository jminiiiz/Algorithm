#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    cout << min({a, b, c}) << " " << a+b+c-max({a,b,c})-min({a,b,c}) << " " << max({a,b,c});
}