#include <iostream>
#include<vector>

using namespace std;

int  N, M, S, E;
int dp[2001];
int v[2001][2001] = { 0, };
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> dp[i];
        v[i][i] = 1;
    }
    for (int i = 1; i <= N; i++) {
        if (dp[i] == dp[i + 1]) {
            v[i][i + 1] = 1;
        }
    }

    for (int i = N-1; i>= 1; i--) {
        for (int j = i+2; j <= N; j++) {
            if (dp[i] == dp[j] && v[i + 1][j - 1] == 1) {
                    v[i][j] = 1;
            }
        }
    }

    cin >> M;

    for (int i = 1; i <= M; i++) {
        cin >> S >> E;
        cout << v[S][E] << "\n";

    }

    return 0;
}

