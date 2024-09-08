#include<iostream>
#include<queue>
#include <algorithm>

using namespace std;

int n ,cnt, xcnt = 0;

int visited[26][26];
int map[26][26] = { 0, };
queue<pair<int, int>> q;
vector<int> ans;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y) {
	

	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx < 0 || yy < 0 || xx >= n || yy >= n) continue;
		if (map[xx][yy] == 1&& visited[xx][yy]==0) {
			xcnt++;
			visited[xx][yy] = 1;
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
			visited[i][j] = 0;

			if (s[j] == '1') {
				map[i][j] = 1;
			}
			else
				map[i][j] = 0;
		}
			
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && visited[i][j]==0) {
				visited[i][j] = 1;
				xcnt = 1;
				dfs(i, j);
				ans.push_back(xcnt);
				cnt++;
			}

		}

	}
	sort(ans.begin(), ans.end());
	cout << cnt << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";

	}
	return 0;
}

