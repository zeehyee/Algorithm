#include<iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (2*n - 1) - i; j++) {
			if (j < i)
				cout << ' ';
			else
				cout << '*';
		}

		cout << endl;
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n + 1 + i; j++) {
			if (j < n - 2 - i)
				cout << ' ';
			else
				cout << '*';
		}
		cout << endl;
	}
}
