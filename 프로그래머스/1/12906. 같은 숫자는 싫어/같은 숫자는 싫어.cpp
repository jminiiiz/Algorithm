#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> v;
    for (int i = 0; i < arr.size(); i++) {
        if (i < arr.size() - 1 && arr[i] == arr[i+1]) {
            continue;
        }
        v.push_back(arr[i]);
    }
    return v;
}