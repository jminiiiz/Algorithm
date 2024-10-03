#include <bits/stdc++.h>
using namespace std;
int a, b, res;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    if (a % 10 == b % 10) {
        if ((a / 10) % 10 == (b / 10) % 10) {
            if (a / 100 > b / 100) {
                res += (a % 10) * 100;
                a /= 10;
                res += (a % 10) * 10;
                res += (a /= 10);
            }
            else {
                res += (b % 10) * 100;
                b /= 10;
                res += (b % 10) * 10;
                res += (b /= 10);
            }
        }
        else if ((a / 10) % 10 > (b / 10) % 10) {
            res += (a % 10) * 100;
            a /= 10;
            res += (a % 10) * 10;
            res += (a /= 10);
        } else {
            res += (b % 10) * 100;
            b /= 10;
            res += (b % 10) * 10;
            res += (b /= 10);
        }
    } else if (a % 10 > b % 10) {
        res += (a % 10) * 100;
        a /= 10;
        res += (a % 10) * 10;
        res += (a /= 10);
    } else {
        res += (b % 10) * 100;
        b /= 10;
        res += (b % 10) * 10;
        res += (b /= 10);
    }
    cout << res;
}