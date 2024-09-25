#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    stringstream ss(s);
    string token;
    int sum = 0;
    int num = 0;
    while (ss >> token) {
        if (token == "Z") {
            sum -= num;
        } else {
            num = stoi(token);
            sum += num;
        }
    }
    return sum;
}