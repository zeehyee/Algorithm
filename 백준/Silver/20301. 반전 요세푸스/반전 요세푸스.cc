#include <iostream>
#include<deque>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, m, cnt = 0;
	bool pass = true;
	cin >> n >> k >> m;
	deque<int> dq;
	vector<int> ans;

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (1) {
		if (dq.size() == 1) {
			ans.push_back(dq.front());
			break;
		}
		
		if (pass == false) {
			for (int i = 0; i < k - 1; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			ans.push_back(dq.back());
			dq.pop_back();
		}
		else {
			for (int i = 0; i < k - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			ans.push_back(dq.front());
			dq.pop_front();
		}
		cnt++;
		if (cnt == m) {
			pass = !pass;
			cnt =0;
		}

	}
	
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}

}