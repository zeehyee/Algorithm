#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    long long answer = 0;
    long long check = 0;
    for(int i = 0; i < number.size(); i++)
        check += number[i] - 48;
    answer = check % 9;
    return answer;
}