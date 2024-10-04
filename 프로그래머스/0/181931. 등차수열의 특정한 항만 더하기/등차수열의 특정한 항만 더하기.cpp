#include <string>
#include <vector>

using namespace std;
int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    vector<int> v(included.size());
    v[0] = a;
	for (int i = 1; i < included.size(); i++) {
        v[i] = v[i-1] + d;
    }
    for (int i = 0; i < included.size(); i++) {
        if (included[i] == true) answer += v[i];
    }
    return answer;
}