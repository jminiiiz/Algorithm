#include <bits/stdc++.h>
using namespace std;

int A, B, C, T1, T2, cnt[104], ret;
int main() {
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        cin >> T1 >> T2;
        for (int j = T1; j < T2; j++) cnt[j]++;
    }
    for (int j = 0; j < 100; j++) {
        if (cnt[j] == 1) ret += A;
        else if (cnt[j] == 2) ret += B * 2;
        else if (cnt[j] == 3) ret += C * 3;
    }
    cout << ret << "\n";
    return 0;
}