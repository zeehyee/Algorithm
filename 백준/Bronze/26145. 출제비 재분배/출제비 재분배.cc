#include<iostream>

using namespace std;

int main() {
	int n, m;
	int ans[2002] = { 0, };
	int tmp;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> ans[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + m; j++) {
			cin >> tmp;
			ans[i] = ans[i] - tmp;
			ans[j] = ans[j] + tmp;
		
		}
	}
	for (int i = 0; i < n + m; i++) {
		cout << ans[i] << " ";
	}
}