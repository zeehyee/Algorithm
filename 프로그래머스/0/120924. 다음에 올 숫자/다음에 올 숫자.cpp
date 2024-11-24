#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    
    bool check = 0;
    int answer;
    
    if(common[1]- common[0] == common[2] - common[1])
        check = 0;
    else if(common[1] / common[0] == common[2] / common[1])
        check = 1;
    
    if(check == 0)
        return common[common.size()-1] + common[1]- common[0] ;
    else
        return common[common.size()-1] * (common[1] / common[0]);

    return answer;
}