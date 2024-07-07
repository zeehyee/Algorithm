#include<iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	int count[10001] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		count[k] += 1;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 1; j <= count[i]; j++) {
			cout << i << "\n";
		}
	}
}