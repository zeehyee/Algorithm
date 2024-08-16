#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> A, B;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, k, cnt = 0;
	cin >> t;
	

	while (t > 0) {
		cin >> n >> k;
		A.clear(); 
		B.clear();


		for (int i = 0; i < n; i++) {
			int get;
			cin >> get;
			A.push_back(get);
		}
		for (int i = 0; i < k; i++) {
			int get;
			cin >> get;
			B.push_back(get);
		}
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < k; j++) {
				if (A[i] > B[j]) cnt++;
				else break;
			}

		}
		cout << cnt << "\n";
		t--;
		cnt = 0;
	}
	

}