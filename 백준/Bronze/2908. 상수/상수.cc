#include<iostream>
#include<string>

using namespace std;

int main() {
	
	char n1[4], n2[4];
	cin >> n1 >> n2;
	
	for (int i = 2; i >=0; i--) {
		if (n1[i] > n2[i]) {
			for (int k = 2; k >= 0; k--) {
				cout << n1[k];
			}
			break;
		}
		else if (n1[i] < n2[i]) {
			for (int k = 2; k >= 0; k--) {
				cout << n2[k];
			}
			break;
		}
	}
}