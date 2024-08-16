#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
long long list[10000];


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
	cin >> k >> n;

	long long maxi = 0, ans = 0;

	for (int i = 0; i < k; i++) {
		cin >> list[i];
		maxi = max(maxi, list[i]);
	}
	long long left = 1,right = maxi, mid;

	while (left <= right) {
		mid = (left + right) / 2;

		long long cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += list[i] / mid;
		}

		if (cnt >= n) {

			left = mid + 1;
			ans = max(ans, mid);
		}
		else
			right = mid - 1;
	}
	
	cout << ans << "\n";
	
}