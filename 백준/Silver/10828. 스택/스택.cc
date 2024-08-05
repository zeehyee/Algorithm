#include <iostream>
#include<stack>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	stack<int> arr;
	string s;
	for(int i =0; i<n; i++){
		cin >> s;
		if ("push" == s) {
			int c;
			cin >> c;
			arr.push(c);
		}
		else if ("top" == s) {
			if (!arr.empty()) cout << arr.top() << endl;
			else cout << -1 << endl;
		}
		else if ("size" == s) {
			cout << arr.size() << endl;
		}
		else if ("pop" == s) {
			if (!arr.empty()) {
				cout << arr.top() << endl;
				arr.pop();
			}
			else cout << -1 << endl;
			
		}
		else if ("empty" == s) {
			if (arr.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
	}
	
	return 0;
}