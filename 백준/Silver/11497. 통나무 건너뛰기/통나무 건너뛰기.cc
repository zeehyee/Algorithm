#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, tmp = 0;
	cin >> n;
	

	for (int i = 0; i < n; i++) {
		
		cin >> m;
		int arr[10001] = { 0, };

		for (int j = 0; j < m; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + m); 
		for (int j = 0; j < m - 2;j++) {
			tmp = max(tmp, (arr[m - 1 - j] - arr[m - 3 - j]));
		}
		cout << tmp << "\n";
		tmp = 0;
	}
}


