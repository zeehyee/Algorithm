#include<iostream>
#include<string>

using namespace std;
int gcd(int n, int m) {
	int a = min(n, m);
	int result;
	for (int i = 1; i <= a; i++) {
		if (n % i == 0 && m % i == 0)
			result = i;
	}
	return result;
}
int main() {

	int n, m;
	char c;
	cin >> n >> c >> m;

	int result = gcd(n, m);
	cout << n / result << c << m / result;
}
