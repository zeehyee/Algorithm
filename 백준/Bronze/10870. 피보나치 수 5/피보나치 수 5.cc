#include <iostream>
#include<string>


using namespace std;

int fibona(int n) {
	if (n == 0) return 0;
	else if (n == 1 || n == 2) return 1;
	return fibona(n - 1) + fibona(n - 2);
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cout << fibona(n);
	
}