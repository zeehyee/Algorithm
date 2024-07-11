#include<iostream>


using namespace std;
int main() {
	string s;
	int n, tmp=0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; s[j] != '\0'; j++) {
			if (s[j] == 'O') {
				cnt += ++tmp;
			}
			else
				tmp = 0;

		}
		cout << cnt << "\n";
		tmp = 0,cnt = 0;
	}
	;

}