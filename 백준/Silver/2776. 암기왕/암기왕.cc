#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> list;

int binary_search(int s, int e,int key) {
	int mid = (s + e) / 2;
	if (list[mid] == key) return 1;
	else if (list[mid] > key) e = mid - 1;
	else s = mid + 1;

	return 0;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m;
	
	cin >> t;
	while (t > 0) {
		cin >> n;
        list.clear();
        
		for (int i = 0; i < n; i++) {
			int get;
			cin >> get;
			list.push_back(get);
		}

		sort(list.begin(), list.end());

		cin >> m;
		for (int i = 0; i < m; i++) {
			int check;
			cin >> check;
			if (binary_search(list.begin(), list.end(), check))
				cout << 1;
			else 
				cout << 0;
			cout << "\n";
		}
		t--;
	}
}