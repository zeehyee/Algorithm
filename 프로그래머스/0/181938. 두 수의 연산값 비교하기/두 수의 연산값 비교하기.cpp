#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string result1 = to_string(a)+ to_string(b);
    int result2 = 2 * a * b;
    if(stoi(result1) > result2)
        answer = stoi(result1);
    else
        answer = result2;
    return answer;
}