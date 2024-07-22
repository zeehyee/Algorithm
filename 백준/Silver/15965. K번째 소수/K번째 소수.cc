#include <iostream>
#include<cmath>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool tmp = true;
	long long n, cnt = 0;
	cin >> n;
	
	int m = 1;

	while (true) {
		for (int i = 2; i <= sqrt(m); i++) {
			if (m % i == 0) {
				tmp = false;
				break;
			}
		}
		if (tmp)
			if (m != 1) cnt++;
		if (cnt == n) {
			cout << m;
			return 0;
		}
		m++;
		tmp = true;

	}

	
}