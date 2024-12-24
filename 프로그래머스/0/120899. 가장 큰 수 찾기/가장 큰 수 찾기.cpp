#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int num = 0; int idx = -1;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > num) {
            num = array[i];
            idx = i;
        }
    }
    answer.push_back(num);
    answer.push_back(idx);
    return answer;
}