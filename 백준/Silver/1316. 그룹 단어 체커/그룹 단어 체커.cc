#include<iostream>
#include<string>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	int cnt = 0;
	string str;
	bool determine = true;

	for (int i = 0; i < n; i++) {
		bool arr[26] = { 0,0, };
		cin >> str;
		char c = str[0];
		for (int j = 0; j<=str.length(); j++) {
			if (arr[c - 97] == 1) {
				determine = false;
				break;
			}

			else{
				if (c != str[j]) {
					arr[c - 97] = 1;
					c = str[j];
				}
					
			}
		}
		if (determine)
			cnt++;
		
		determine = true;
		
	
	}
	cout << cnt;
}