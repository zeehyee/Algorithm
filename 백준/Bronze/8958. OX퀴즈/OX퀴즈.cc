#include<iostream>

using namespace std;
int main() {
	string s = "";
	int tmp = 0, cnt = 0;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'O')
				tmp += (++cnt);
			else
				cnt = 0;
		}
		cout << tmp << endl;
		tmp = 0, cnt = 0;
	}

	
}