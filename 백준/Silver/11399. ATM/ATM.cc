#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n, tmp = 0 ,ans=0;
	cin >> n;
	int arr[1001];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		tmp = tmp +  arr[i];
		ans += tmp;
	}
	cout << ans;
}

