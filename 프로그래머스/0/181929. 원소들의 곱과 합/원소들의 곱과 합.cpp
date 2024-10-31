#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int mul = 1, sum = 0;
    for (auto i : num_list) {
        mul *= i;
        sum += i;
    }
    if (mul < sum*sum) return 1;
    else return 0;
}