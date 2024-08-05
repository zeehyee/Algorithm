#include <iostream>
#include<deque>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string s;
	deque<int> dq;

	for (int i = 0; i < n; i++) {
		cin >> s;
		
		if (s == "push_back") {
			int c;
			cin >> c;
			dq.push_back(c);
		}
		else if (s == "push_front") {
			int c;
			cin >> c;
			dq.push_front(c);
		}
		else if (s == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else
				cout << -1 << endl;
		}
		else if (s == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << endl;
				dq.pop_back();
			}
			else
				cout << -1 << endl;
		}
		else if (s == "size") {
			cout << dq.size() << endl;
		}
		else if (s == "empty") {
			cout << dq.empty() << endl;
		}
		else if (s == "front") {
			if (!dq.empty()) {
				cout << dq.front() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (s == "back") {
			if (!dq.empty()) {
				cout << dq.back() << endl;
			}
			else
				cout << -1 << endl;
		}

	}
	

}