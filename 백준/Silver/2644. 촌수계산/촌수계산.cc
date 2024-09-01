#include<iostream>
#include<queue>
#include <algorithm>

using namespace std;

int n, m, x, y, cnt = 0, ans = 0;
int graph[101][101] = {0,};
int visit[101] = { 0, };
bool check = 0;

void bfs(int s) {
	queue<int> map;
	map.push(s);
	visit[s] = 1;

	while (!map.empty()) {
		s = map.front();
		map.pop();

		for (int i = 1; i <= n; i++) {
			if (graph[s][i] == 1 && visit[i] == 0) {
				map.push(i);
				visit[i] = visit[s]+1;

			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> x >> y >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	bfs(x);
	if (visit[y] == 0)
		cout << -1 << "\n";
	else
		cout << visit[y] - 1 << "\n";
	return 0;
}

