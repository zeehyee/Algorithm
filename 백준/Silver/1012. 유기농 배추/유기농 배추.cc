#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int t, n, m, k, cnt = 0;
int graph[51][51] = { 0, };

int dx[4] = { 0,0,-1,1 }; // 상하좌우
int dy[4] = { 1,-1,0,0 };


void clear() {
	for (int i = 0; i < m; i++) {
		fill(graph[i], graph[i]+n, 0);
	}
}
void dfs(int x, int y) {

	graph[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx < 0 || yy < 0 || xx >= m || yy >= n) continue;
		if (graph[xx][yy] == 1) {
			dfs(xx, yy);
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t > 0) {
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int u, v;
			cin >> u >> v;
			graph[u][v] = 1;

		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (graph[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}

		

		cout << cnt << "\n";
		t--;
		clear();
		cnt = 0;
	}

	return 0;
}

