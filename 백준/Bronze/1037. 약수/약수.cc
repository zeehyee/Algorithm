#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, m;
	vector<int> arr;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		arr.push_back(m);
	}
	sort(arr.begin(), arr.end());

	cout << arr[0] * arr[n - 1];
}


