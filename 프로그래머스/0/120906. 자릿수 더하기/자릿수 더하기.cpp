#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s = to_string(n);
    for (auto c : s) {
        answer += c - '0';
    }
    return answer;
}