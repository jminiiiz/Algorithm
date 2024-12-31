#include <string>
#include <vector>

using namespace std;
int line[202];

int solution(vector<vector<int>> lines) {
    int answer = 0;
    for (int i = 0; i < lines.size(); i++) {
        for (int j = lines[i][0] + 100; j < lines[i][1] + 100; j++) line[j]++;
    }
    for (int i = 0; i < 202; i++) {
        if (line[i] >= 2) answer++;
    }
    return answer;
}