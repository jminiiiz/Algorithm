#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    if (A > B) cout << ">\n";
    else if (B > A) cout << "<\n";
    else cout << "==\n";
}