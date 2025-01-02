#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> v;
    for (int i = 1; v.size() < n; i++) {
        if (i % 3 == 0 || to_string(i).find('3') != string::npos) continue;
        v.push_back(i);
    }
	return v[n - 1];
}