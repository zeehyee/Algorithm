#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> list;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int  n, k;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int get;
		cin >> get;
		list.push_back(get);
	}
	cin >> k;
	sort(list.begin(), list.end());

	int left = 0, right = list[n - 1] , mid;
	int result;
	
	while (left <= right) {
		mid = (left + right) / 2;
		int  cnt = 0;

		for (int i = 0; i < n; i++) {
			cnt += min(list[i], mid);
		}

		if (k >= cnt) {
			result = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	cout << result << "\n";
	
}