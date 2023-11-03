#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);
    string q = "";
    q += sa; q += sb;
    string w = "";
    w += sb; w += sa;
    int ia = stoi(q);
    int ib = stoi(w);
    if (ia >= ib) return ia;
    else return ib;
}