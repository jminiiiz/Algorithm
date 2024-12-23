#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    string snum[10] = { "zero", "one", "two", "three", "four", 
                      "five", "six", "seven", "eight", "nine" };
    string inum[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    for (int i = 0; i < 10; i++) {
        size_t pos = 0;
        while ((pos = numbers.find(snum[i], pos)) != string::npos) {
        	numbers.replace(pos, snum[i].length(), inum[i]);
        }
    }
    return stol(numbers);
}