#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    double d = 0.0;
    cin >> s;
    switch (s[0]) {
        case 'A':
            d = 4.0;
            break;
        case 'B':
            d = 3.0;
            break;
        case 'C':
            d = 2.0;
            break;
        case 'D':
            d = 1.0;
            break;
    }
    switch (s[1]) {
        case '+':
            d += 0.3;
            break;
        case '-':
            d -= 0.3;
            break;
    }
    printf("%.1f", d);
}