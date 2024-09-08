#include<iostream>
#include<queue>
#include <algorithm>
#include<vector>

using namespace std;

int n,m, cnt = 0;
int visit[1001] = { 0, };
vector<int> map[1001];


void dfs(int s) {
	visit[s] = 1;
	for (int i = 0; i < map[s].size(); i++) {
		int idx = map[s][i];
		if (visit[idx] == 0) {
			dfs(idx);
		}
			

	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		map[x].push_back(y);
		map[y].push_back(x);

	}
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0) {
			cnt++;
			dfs(i);
			
		}
	}
	
	cout << cnt ;
	return 0;
}

