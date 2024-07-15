#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	

	int n, i, j;
	cin >> n;
	vector<pair<int, int>> p;
	for (int k = 0; k < n; k++) {
		cin >> i >> j;
		p.push_back(make_pair(i, j));
	}
	sort(p.begin(), p.end());
	//p.erase(unique(p.begin(), p.end()), p.end());

	for (int i = 0; i < p.size(); i++) {
		cout << p[i].first<< " " << p[i].second << "\n";
	}
}


