#include <iostream>
#include <stack>

using namespace std;
int main() {
	stack<int> ans;
	int n, tmp,cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp == 0) {
			ans.pop();
		}
		else {
			ans.push(tmp);
		}
	}
	for (int i = 0; ans.size(); i++) {
		cnt += ans.top();
		ans.pop();
	}
	cout << cnt << endl;
}