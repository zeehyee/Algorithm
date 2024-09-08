#include<iostream>
#include<queue>
#include <algorithm>

using namespace std;

int n, cnt = 0, ans[2] = { 0, };

int visited[100][100];
int map[100][100] = { 0, };

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y) {
	
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx < 0 || yy < 0 || xx >= n || yy >= n) continue;
		if ((map[xx][yy] == map[x][y]) && visited[xx][yy] == 0) {
			dfs(xx, yy);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			map[i][j] = s[j];
		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == 0) {
				dfs(i, j);
				cnt++;
			}

		}

	}
	cout << cnt << " ";
	cnt = 0;
	// 일반인
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			visited[i][j] = 0;
			if (map[i][j] == 'G')
				map[i][j] = 'R'; 
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == 0) {
				dfs(i, j);
				cnt++;
			}

		}

	}
	cout << cnt;
	return 0;
}

