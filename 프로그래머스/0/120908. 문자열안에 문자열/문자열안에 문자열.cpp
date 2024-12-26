#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int n = str1.find(str2);
    return (n == string::npos) ? 2 : 1;
}