#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char arr[6][16] = { 0, };

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] != '\0') {
				cout << arr[j][i];
			}
		}
	}
}


