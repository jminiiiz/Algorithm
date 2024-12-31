#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<int> numbers) {
    int maxNum = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            maxNum = max(numbers[i] * numbers[j], maxNum);
        }
    }
    return maxNum;
}