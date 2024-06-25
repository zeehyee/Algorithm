#include<iostream>

using namespace std;

int main() {
	int n, m;
	int count = 0;
	cin >> n;
	m = n;

	
	while (true) {
	
		n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
		count++;

		if (n == m) break;
	}

	cout << count;
}