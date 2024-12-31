#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    string sp = "";
    for (const string & c : spell) sp += c;
    sort(sp.begin(), sp.end());
    for (string s : dic) {
        sort(s.begin(), s.end());
        if (s == sp) return 1;
    }
    return 2;
}