#include<iostream>
#include<set>
#include<queue>
using namespace std;

long long  L, N, K, s;
vector<long long> map;
queue<pair<long long, long long>> q;
long long dx[] = { -1,1 };
set<long long > visit;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   
    cin >> L >> N >> K;
    map.resize(L);

    for (int i = 0; i < N; i++) {
        cin >> s;
        q.push({s,0});
        visit.insert(s);
    }
    
    while (!q.empty()) {
        long long a = q.front().first;
        long long b = q.front().second;

        q.pop();
        cout << b<<"\n";
        K--;

        if (K == 0) return 0;

        for (int i = 0; i < 2; i++) {
            long long t = a + dx[i];

            if ((0 <= t && t <= L) && !visit.count(t)) {
                q.push({ t,b + 1 });
                visit.insert(t);
            }
        }


    }
    
}