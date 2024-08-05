#include <iostream>
#include<queue>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int c;
			cin >> c;
			q.push(c);
		}
		else if (s == "pop") {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
			}
			else
				cout << -1 << endl;
		}
		else if (s == "size") {
			cout << q.size() << endl;
		}
		else if (s == "front") {
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << -1 << endl;
		}
		else if (s == "back") {
			if (!q.empty())
				cout << q.back() << endl;
			else
				cout << -1 << endl;
		}
		else if (s == "empty") {
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
	}


}