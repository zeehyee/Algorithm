#include<iostream>
#include<queue>
#include <algorithm>

using namespace std;

int m, n, u, v, cnt = 0, xcnt = 0;

int visit[1001][1001];
int map[1001][1001] = { 0, };
queue<pair<int, int>> q;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void bfs() {

	while (!q.empty()) {
		pair<int, int> now = q.front(); 
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx= now.first + dx[i];
			int ny = now.second + dy[i];
		
			if (0 <= nx && 0 <= ny && nx < n && ny < m && map[nx][ny] == 0 && visit[nx][ny]==-1) {
				visit[nx][ny] = visit[now.first][now.second] + 1;
				q.push({ nx,ny });
			}
			
		}

	}

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> m >> n;
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			visit[i][j] = -1;
			if (map[i][j] == 1) {
				q.push({ i, j });  // 세로 , 가로
				visit[i][j]++;
			}
		}
			
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cnt <= visit[i][j]) {
				cnt = visit[i][j];
			}
			if (map[i][j] == 0 && visit[i][j]==-1) {
				cout << -1;
				return 0;
			}
			
		}
	}
	
	cout << cnt;
	
	return 0;
}

