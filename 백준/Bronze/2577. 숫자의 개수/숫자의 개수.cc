#include <bits/stdc++.h>
using namespace std;
int A, B, C, total;
int arr[10];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> A >> B >> C;
    total = A * B * C;
    while (total) {
        arr[total % 10]++;
        total /= 10;
    }
    for (int i = 0; i < 10; i++) cout << arr[i] << "\n";
}