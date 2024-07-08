#include<iostream>

using namespace std;
int main() {
	char c;
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> c;
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (c == 'F')
						cnt++;
				}
			}
			else {
				if (j % 2 != 0) {
					if (c == 'F')
						cnt++;
				}
			}
				
		}
	}

	cout << cnt;

	

}