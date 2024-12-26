#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int n = str1.find(str2);
    if (n == string::npos) return 2;
    else return 1;
}