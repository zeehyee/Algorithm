#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int num = num_list.size();
   
    for(int i = 0; i <num; i++){
        answer.push_back(num_list[i]);
    }
     if(num_list[num-2] < num_list[num-1])
         answer.push_back(num_list[num-1] - num_list[num-2]);
    else
        answer.push_back(2*num_list[num-1]);
    
    return answer;
}