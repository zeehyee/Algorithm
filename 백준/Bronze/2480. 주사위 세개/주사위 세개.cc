#include<iostream>

using namespace std;
int main() {
	
	int a, b, c, tmp;
	cin >> a >> b >> c;
	if (a == b) {
		if (b == c) {
			tmp = 10000 + a * 1000;
		}
		else {
			tmp = 1000 + a * 100;
		}
		
	}
	else {
		if (b == c) {
			tmp = 1000 + b * 100;
		}
		else if (a == c) {
			tmp = 1000 + a * 100;
		}
		else {
			int m = max(max(a, b), c);
			tmp = m * 100;
		}
	}
	cout << tmp;
}