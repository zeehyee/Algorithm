#include <iostream>
#include<vector>

using namespace std;
int main() {
	vector<int> ans;
	int n, k, j;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >>j;
		if (j < k) {
			ans.push_back(j);
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
}