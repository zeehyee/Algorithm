#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int count = 1;
    int dates = ceil((100.0 -progresses[0]) / speeds[0]);
    
    for(int i = 1 ; i < progresses.size(); i++){
       int n = ceil((100.0 - progresses[i]) / speeds[i]);
        if(dates < n){
            dates = n ;
            answer.push_back(count);
            count = 1;
        }
       else{
            count++;
            
       }         
    }
    answer.push_back(count);
    return answer;
}