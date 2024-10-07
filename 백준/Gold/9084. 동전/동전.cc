#include <iostream>
#include<cstring>

using namespace std;

int T, N, M;
int dp[10002] = { 0, };
int cnt[22];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> T;
    for (int k = 0; k < T; k++) {
        cin >> N;
        for (int i = 1; i <= N; i++) {
            cin >> cnt[i];
        }

        cin >> M;
        dp[0] = 1;
        for (int i = 1; i <= N; i++) {
            for (int j = cnt[i]; j <= M; j++) {
                dp[j] += dp[j - cnt[i]];
            }
        }

        cout << dp[M] << "\n";

        memset(dp, 0, sizeof(dp));
    }
   
    return 0;
}

