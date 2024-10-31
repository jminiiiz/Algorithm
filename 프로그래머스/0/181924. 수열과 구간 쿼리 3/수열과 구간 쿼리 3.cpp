#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int i = 0; i < queries.size(); i++) {
        int x = queries[i][0];
        int y = queries[i][1];
        swap(arr[x], arr[y]);
    }
    return arr;
}