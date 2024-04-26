#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int arr[100001];
    int count = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
           arr[count] = s[i]; 
            count++;
        }
        else{
            if(arr[count-1] == '('){
                count -- ;
            }
            else{
                answer = false;
                return answer;
            }
        }
    }
    if(count == 1){
        answer = true;
        return answer;
    }   
    else{
        answer = false;
        return answer;
    }
}
