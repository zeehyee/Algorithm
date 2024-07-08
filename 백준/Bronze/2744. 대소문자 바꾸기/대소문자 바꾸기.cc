#include<iostream>

using namespace std;
int main() {
	char s[101];
	cin >> s;

	for (int i = 0; s[i]!='\0'; i++) {
		if (s[i] >= 'a') {
			s[i] -= 32;
			cout << s[i];
		}
		else {
			s[i] += 32;
			cout << s[i];
		}
	
	}

}