#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int n = arr.size();
    vector<int> answer(n);
    int s,e,k;
    for(int i = 0 ; i < queries.size(); i++){
        s = queries[i][0]; e = queries[i][1]; k = queries[i][2];
        for(int j = s; j <= e; j++){
            if(j % k == 0)
               arr[j]+=1;
        }
    }
       return arr;
}