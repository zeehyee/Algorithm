#include <iostream>
#include<string>


using namespace std;

int factorial(int n) {
	if (n == 0) return 1;
	
	return n * factorial(n-1);
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cout << factorial(n);
	
}