#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    string num[10] = { "zero", "one", "two", "three", "four", 
                      "five", "six", "seven", "eight", "nine" };
    for (int i = 0; i < 10; i++) {
        size_t pos = 0;
        while ((pos = numbers.find(num[i], pos)) != string::npos) {
        	numbers.replace(pos, num[i].length(), to_string(i));
        }
    }
    return stol(numbers);
}