#include <bits/stdc++.h>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
	if (n > m) {
        if (ineq == ">") return 1;
        else return 0;
    } else if (n < m) {
        if (ineq == "<") return 1;
        else return 0;
    } else {
        if (eq == "=") return 1;
        else return 0;
    }
}