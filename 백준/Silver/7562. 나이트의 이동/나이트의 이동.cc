#include<iostream>
#include<queue>
#include <algorithm>

using namespace std;

int t, n, u, v, cnt = 0;


int map[301][301] = { 0, };
int visit[301][301] = { 0, };
queue<pair<int, int>> q;

int dx[8] = {-2,-2,2,2,-1,-1,1,1};
int dy[8] = { 1,-1,1,-1,2,-2,2,-2 };

void clear() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = 0;
			visit[i][j] = 0;
		}
	}
}
void bfs(int x, int y) {
	
	q.push({ x,y });
	visit[x][y] = 1;

	while (!q.empty()) {
		pair<int, int> now = q.front(); 
		q.pop();

		if (now.first == u && now.second == v) {
			cout << map[u][v] << "\n";
			while (!q.empty()) {
				q.pop();
			}
			break;
		}
		for (int i = 0; i < 8; i++) {
			int nx = now.first + dx[i];
			int ny = now.second + dy[i];
		
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (visit[nx][ny]) continue;
			
			visit[nx][ny] = 1;
			map[nx][ny]= map[now.first][now.second] + 1;
			q.push({ nx,ny });
			
			
		}


	}

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;

	for(int i =0 ; i<t; i++){
		int x, y;

		cin >> n;
		cin >> x >> y;
		cin >> u >> v;

		bfs(x,y);
		clear();
	}


	
	return 0;
}

