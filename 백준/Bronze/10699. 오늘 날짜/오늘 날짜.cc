#include <bits/stdc++.h>
using namespace std;
int main() {
    time_t timer = time(nullptr);
    struct tm* t = localtime((&timer));
    printf("%d-%02d-%02d",t->tm_year + 1900, t->tm_mon + 1, t->tm_mday + 1); 
}