#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, string>> p;
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		p.push_back( make_pair(s.length(), s));
	}
	sort(p.begin(), p.end());
	p.erase(unique(p.begin(), p.end()), p.end());

	for (int i = 0; i < p.size(); i++) {
		cout << p[i].second << "\n";
	}
}


