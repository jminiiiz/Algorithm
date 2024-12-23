#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (char c : my_string) {
        if (c >= 'A' && c <= 'Z') answer += c + 32;
        else answer += c - 32;
    }
    return answer;
}