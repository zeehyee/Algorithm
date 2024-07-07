#include<iostream>

using namespace std;
int main() {
	
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 1; j <=n; j++) {
			if (i <= j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	
}