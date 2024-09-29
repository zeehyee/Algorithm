#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

long long T, L;
long long p[2501];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    
    p[0] = 1, p[1] = 1;
    for (int i = 2; i <= 2500; i++) {
        for (int j = 0; j <= i - 1; j++) {
            p[i] = (p[i] + p[j] * p[i - 1 - j]) % 1000000007;
        }
    }

    cin >> T;
    while (T--) {
        cin >> L;
        if (L % 2 == 0) {
            cout << p[L / 2] << "\n";
        }
        else
            cout << 0 << "\n";

        
    }
   
}
