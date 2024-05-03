#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int m=1,s=0;
    for(int i = 0; i< num_list.size(); i++){
        m *= num_list[i];
        s += num_list[i];
    }
    if(m > (s*s))
        answer = 0;
    else
        answer = 1;
    
    return answer;
}