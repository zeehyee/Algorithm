#include<iostream>
#include <string>
#include<stack>

using namespace std;

string check(string s){
	string st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			st.push_back('(');
		else {
			if (st.empty())
				return "NO";
			st.pop_back();
		}
	}
	if (st.empty())
		return "YES";
	else
		return "NO";
}
int main() {
	int n;
	string tmp;
	cin >> n;
	string s;
	string ans;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		ans += check(tmp)+ " ";
	}
	cout << ans;
}