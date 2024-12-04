#include <bits/stdc++.h>
using namespace std;
string subject, grade;
double score, res, sum;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 20; i++) {
        cin >> subject >> score >> grade;
        if (grade == "P") continue;
        sum += score;
        if (grade == "A+") res += 4.5 * score;
        else if (grade == "A0") res += 4.0 * score;
        else if (grade == "B+") res += 3.5 * score;
        else if (grade == "B0") res += 3.0 * score;
        else if (grade == "C+") res += 2.5 * score;
        else if (grade == "C0") res += 2.0 * score;
        else if (grade == "D+") res += 1.5 * score;
        else if (grade == "D0") res += 1.0 * score;
        else res += 0.0 * score;
    }
    cout << res / sum;
}