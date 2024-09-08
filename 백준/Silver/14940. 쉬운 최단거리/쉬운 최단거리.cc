#include<iostream>
#include<queue>
#include <algorithm>
#include<vector>

using namespace std;

int n, m, x, y;
//int memo[1001][1001];
int map[1001][1001];
pair<int, int> goal;
queue<pair<int, int>> q;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void bfs() {

	while (!q.empty()) {

		int dX = q.front().first;
		int dY = q.front().second;

		for (int i = 0; i < 4; i++) {
			int nextX = dX + dx[i];
			int nextY = dY + dy[i];
			
			if (map[nextX][nextY] == -1) {
				map[nextX][nextY] = map[dX][dY] + 1;
				q.push(make_pair(nextX, nextY));
			}

		}
		q.pop();
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	int input;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			cin >> input;
			if (input == 2) {
				q.push(make_pair(i, j));
				map[i][j] = 0;
			}
			else if (input == 1)
				map[i][j] = -1;
			else
				map[i][j] = input;
		}
	}
	
	bfs();


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}

