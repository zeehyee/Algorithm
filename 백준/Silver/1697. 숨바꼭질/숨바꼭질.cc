#include<iostream>
#include<queue>
#include <algorithm>
#include<cmath>

using namespace std;

int n, k;
int visit[100001] = { 0, };


void bfs(int s) {
	queue<int> map;
	map.push(s);
	visit[s] = 0;
	
	while (!map.empty()) {
		                                                              
		s = map.front();
		map.pop();
	

		if (s == k) break;
		int minus = s - 1;
		int plus = s + 1;
		int multi = 2 * s;
		if (minus>= 0 && visit[minus] == 0) {
			map.push(minus);
			visit[minus] = visit[s] + 1;
		}
		if (plus < 100001 && visit[plus] == 0) {
			map.push(plus);
			visit[plus] = visit[s] + 1;
		}
		if (multi<100001 && visit[multi] == 0) {
			map.push(multi);
			visit[multi] = visit[s] + 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	bfs(n);
	 
	cout << visit[k];
	
	return 0;
}

