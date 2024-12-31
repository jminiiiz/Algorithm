#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
	int n = score.size();
    vector<int> ranks(n, 1);
    
    for (int i = 0; i < n; i++) {
        int sum1 = score[i][0] + score[i][1];
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int sum2 = score[j][0] + score[j][1];
            if (sum2 > sum1) ranks[i]++;
        }
    }
    return ranks;
}