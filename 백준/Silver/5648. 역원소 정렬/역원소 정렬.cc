#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string s;
	vector<long long> arr;
	for (int i = 0; i < n; i++) {
		cin >> s;
		reverse(s.begin(), s.end());
		arr.push_back(stoll(s));
	}
	sort(arr.begin(), arr.end());

	for (long n : arr) {
		cout << n <<"\n";
	}
}


