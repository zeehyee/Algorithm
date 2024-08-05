#include <iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	queue<int> q;
	vector<int> ans;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (1) {
		if (q.size() == 1) {
			ans.push_back(q.front());
			break;
		}
		for (int i = 0; i < k-1; i++) {
			q.push(q.front());
			q.pop();
		}
		ans.push_back(q.front());
		q.pop();
		
	}
	cout << '<';
	for (int i = 0; i < n-1; i++) {
		cout << ans[i] << ", ";
	}
	cout << ans[n - 1] << '>';

}