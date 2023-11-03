#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int sum = 0;;
	if (n & 1) {
        for (int i = 1; i <= n; i = i + 2) sum += i;
        return sum;
    }
    else {
        for (int i = 0; i <= n; i = i + 2) sum += pow(i, 2);
        return sum;
    }
}