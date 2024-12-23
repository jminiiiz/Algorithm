#include <string>
#include <vector>

using namespace std;

int arr[26];
string solution(string s) {
    string answer = "";
    for (auto c : s) arr[c-'a']++;
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) {
            answer += i + 'a';
        }
    }
    return answer;
}