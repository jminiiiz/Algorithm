#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N, M;
    cin >> N >> M;
    if (N > M) cout << N - M;
    else cout << M - N;
}