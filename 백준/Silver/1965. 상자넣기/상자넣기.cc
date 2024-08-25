#include<iostream>
#include<string>
#include<map>


using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int memo[1001];
    int ans[1001];
    int n, maxv = 1;
  
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> memo[i];
    }
    for(int i =1; i<= n; i++){
        ans[i] = 1;
        for (int j = 1; j < i; j++) {
            if (memo[j] >= memo[i]) {
                continue;
            }
            ans[i] = max(ans[i], ans[j] + 1);
        }
        maxv = max(maxv, ans[i]);
    }

    cout << maxv;

    return 0;

}