#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(int i, int j) {
	return j < i;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end(),compare);
	 
	for (int i = 0; i < n; i++) {
		cout <<  arr[i] << "\n";
	}
}
