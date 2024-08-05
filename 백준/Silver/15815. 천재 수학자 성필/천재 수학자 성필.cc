#include <iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> ans;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			ans.push(s[i] - '0');
		else {
			int tmp = ans.top();
			ans.pop();
			int tmp2 = ans.top();
			ans.pop();
			if (s[i] == '*')
				tmp = tmp2 * tmp;
			else if (s[i] == '+')
				tmp = tmp2 + tmp;
			else if (s[i] == '-')
				tmp = tmp2 - tmp;
			else if (s[i] == '/')
				tmp = tmp2 / tmp;
			ans.push(tmp);
		}
		

	}
	cout << ans.top();

}