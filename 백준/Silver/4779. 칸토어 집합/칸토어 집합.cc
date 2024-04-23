#include <bits/stdc++.h>
using namespace std;
void cantor(int n) {
    if (n == 0) {
        cout << '-';
        return;
    }
    cantor(n - 1);
    for (int i = 0; i < pow(3, n - 1); i++) cout << ' ';
    cantor(n - 1);
}
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        cantor(n);
        cout << "\n";
    }
}