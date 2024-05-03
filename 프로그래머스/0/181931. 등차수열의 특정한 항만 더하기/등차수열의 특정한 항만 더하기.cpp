#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int ans;
    int n = included.size();
    
    for(int i =0; i<n; i++){
        ans = a + i*d;
        if( included[i] == true)
            answer+=ans;
    }
    return answer;
}