#include <iostream>


using namespace std;
int main() {
	
	int k;
	int arr[28] = { 0, };
	int ans[31] = { 0, };
	for (int i = 0; i < 28; i++) {
		cin >> k;
		ans[k - 1] = 1;
	}
	for (int i = 0; i <30; i++) {
		if (ans[i] == 0) {
			cout << i+1 << "\n";
		}
		
	}

}