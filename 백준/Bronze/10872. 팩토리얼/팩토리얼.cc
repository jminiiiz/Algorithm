#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
    cin >> N;
    int fact = 1;
    for (int i = 1; i <= N; i++) {
        fact = fact * i;
    }
    cout << fact;
}