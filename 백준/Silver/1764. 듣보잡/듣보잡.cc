#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, cnt = 0;
	cin >> n >> m;
	string s;
	map <string, int> ans;

	for (int i = 0; i < n; i++) {
		cin >> s;
		ans.insert({ s,1 });
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (ans.find(s) != ans.end()) {
			ans[s]++;
			cnt++;
		}
	}
	cout << cnt << "\n";
	for (auto p : ans) {
		if (p.second == 2)
			cout << p.first << "\n";

	}
}


