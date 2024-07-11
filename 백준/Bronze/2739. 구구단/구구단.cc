#include<iostream>


using namespace std;
int main() {
	int n, tmp;
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		tmp = n * i;
		cout << n << " * " << i << " = " << tmp << "\n";
	}

}