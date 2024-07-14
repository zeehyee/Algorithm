#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main() {

	int a, b, i;
	cin >> a >> b;
	vector<int> arr(a+b);
	
	for (i = 0; i < a+b; i++) {
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());
	//arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size()-1; i++) {
		cout << arr[i] << " ";
	}
	cout << arr[arr.size() - 1];
}

