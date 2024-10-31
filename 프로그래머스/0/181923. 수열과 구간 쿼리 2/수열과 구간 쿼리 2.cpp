#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> ans;
    for (auto query : queries) {
        int s = query[0], e = query[1], k = query[2];
        int x = 999999;
        bool found = false;
        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                x = min(x, arr[i]);
                found = true;
            }
        }
        if (found) ans.push_back(x);
        else ans.push_back(-1);
    }
    return ans;
}