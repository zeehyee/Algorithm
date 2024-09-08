#include <iostream>
using namespace std; 
int dx[4] = { 0,0,-1,1 }; 
int dy[4] = { 1,-1,0,0 }; 
int m, n, k;
int map[25][25]; 
int visited[25][25]; 
int cnt; 
void dfs(int y, int x, int dis) {
	if (x == n - 1 && y == 0&&dis==k) {
		cnt++; 
		return; 
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m )continue; 
		if (visited[ny][nx]|| map[nx][ny])continue;
		visited[ny][nx] = 1; 
		dfs(ny, nx, dis + 1); 
		visited[ny][nx] = 0; 
	}
}
int main() {
	cin >> m >> n >> k; 
	for (int i = 0; i < m; i++) {
		string s; cin >> s; 
		for (int j = 0; j < n; j++) {
			if (s[j] == 'T')map[i][j] = 1; 
		}
	}
	visited[m - 1][0] = 1; 
	dfs(m - 1, 0, 1); 
	cout << cnt; 
}