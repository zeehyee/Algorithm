#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>

using namespace std;

int n, m, s;
int graph[1001][1001] = { 0, };
bool visited[1001] = { 0, };


void clear() {
	for (int i = 0; i < 1001; i++) {
		visited[i] = 0;
	}
}
void dfs(int start) {

	visited[start] = 1;
	cout << start << " ";

	for (int i=1; i <= n; i++) {
		if (visited[i]==0 && graph[start][i]==1) {
			dfs(i);
		}
	}

}

void bfs(int start) {
	queue<int> map;
	map.push(start);
	visited[start] = 1;
	cout << start << " ";

	while (!map.empty()) {
		
		start= map.front();
		map.pop();

		for (int i = 1; i <= n; i++) {
			if (graph[start][i] == 1 && visited[i] == 0) {
				map.push(i);
				visited[i] = 1;
				cout << i << " ";
			}
		}
	}
}
int main() {

	cin >> n >> m >> s;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u][v] = 1;
		graph[v][u] = 1;

	}
	dfs(s);
	clear();
	cout << "\n";
	bfs(s);

	return 0;
}

