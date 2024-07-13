#include<iostream>
#include<string>

using namespace std;

int main() {
	
	char s[101];
	cin >> s;
	int arr[27];
	fill_n(arr, 27, -1);
	for (int i = 0; s[i] != '\0'; i++) {
		if (arr[s[i] - 97] != -1) {
			arr[s[i] - 97] = min(i, arr[s[i] - 97]);
		}
		else
			arr[s[i] - 97] = i;
	}
	for (int j = 0; j < 26; j++) {
		cout << arr[j] << " ";
	}
}