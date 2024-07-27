#include <iostream>
#include<string>


using namespace std;
int row[501] = { 0, }, col[501] = { 0, };


int num(int n) {
	int tmp = 0;
	while (n >= 0) {
		if (n % 10 == 9)
			tmp++;
		n /= 10;
	}
	return tmp;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k, sum = 0, value = -1;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> k;
			while (k) {
				if (k % 10 == 9) {
					row[i]++;
					col[j]++;
				}
				k /= 10;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		sum += row[i];
		value = max(value, row[i]);
	}
	for (int j = 0; j < m; j++) {
		value = max(value, col[j]);
	}

	cout << sum - value;
	return 0;
}