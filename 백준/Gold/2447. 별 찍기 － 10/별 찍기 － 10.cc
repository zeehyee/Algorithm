#include <iostream>
#include<string>
#include<vector>



using namespace std;

long long  b, c;

void func(int i, int j, int n) {
	if (n == 1) {
		cout << "*";
		return;
	}
	else if ((i / (n / 3)) % 3 == 1 && (j / (n / 3) % 3 == 1))
		cout << " ";
	else
		func(i, j, n / 3);
	
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			func(i, j, n);
		}
		cout << "\n";
	}

	return 0;
}