#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string s, t;
    for (auto i : num_list) {
        if (i % 2 == 0) s += to_string(i);
        else t += to_string(i);
    }
    int answer = 0;
    answer = stoi(s) + stoi(t);
    return answer;
}