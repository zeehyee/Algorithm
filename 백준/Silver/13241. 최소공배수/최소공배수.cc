#include<iostream>

using namespace std;

int main() {
	
	long long  n, m;
	cin >> n >> m;
	long long c = min(n, m);
	long long result = 0;
	for (long long i = 1; i <= c; i++) {
		if (n % i == 0 && m % i == 0)
			result = max(result, i);
	}
	cout << (n * m) / result;
}