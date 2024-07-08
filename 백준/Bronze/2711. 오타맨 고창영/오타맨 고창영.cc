#include<iostream>

using namespace std;
int main() {
	int n, k;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k >> s;
		for(int j=0; j<s.size(); j++){
			if (j != k - 1) {
				cout << s[j];
			}
		}
		cout << "\n";
	}


}