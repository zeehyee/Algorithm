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

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    vector<int> sidx, tidx;
    for (int i = 0; i < n + m; i++) {
        if (s[i] == '1') sidx.push_back(i);
        if (t[i] == '1') tidx.push_back(i);
    }

    long ans = 0;
    long a = 0;
    for (int i = 0; i < m; i++) {
        a += abs(sidx[i] - tidx[i]);
    }
    if (a % 2 == 0) {
        a = a >> 1;
        ans = 2 * a * a;
    }
    else {
        a = a >> 1;
        ans = (a + 1) * (a + 1) + a * a;
    }
    cout << ans << "\n";

    return 0;
}

