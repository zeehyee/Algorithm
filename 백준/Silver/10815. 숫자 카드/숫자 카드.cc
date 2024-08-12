#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, k;
vector<int> card;
int binary(int start, int end, int key) {

	while (start <= end) {
		int mid = (start + end) / 2;

		if (card[mid] == key) return 1;
		else if (key > card[mid]) start = mid + 1;
		else end = mid - 1;
	}
	return 0;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	cin >> n;
	for (int i = 0; i < n; i++) {
		int get;
		cin >> get;
		card.push_back(get);
	}
	sort(card.begin(), card.end());

	cin >> k;
	for (int i = 0; i < k; i++) {

		int check;
		cin >> check;
		cout << binary(0, n - 1, check) << " ";

	}
}