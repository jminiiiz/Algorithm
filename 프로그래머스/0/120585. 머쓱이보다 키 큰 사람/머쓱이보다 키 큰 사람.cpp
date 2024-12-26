#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (int i = array.size() - 1; i >= 0; i--) {
        if (array[i] <= height) break;
        answer++;
    }
    return answer;
}