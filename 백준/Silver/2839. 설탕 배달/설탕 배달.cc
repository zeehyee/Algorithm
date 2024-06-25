#include<iostream>
#include <string>

using namespace std;

int main() {
	int n, m, tmp = 0;
	cin >> n;
	while (true) {
		if (n % 5 == 0) {
			tmp += n / 5;
			break;
		}
		n -= 3;
		tmp++;
		if (n < 0)
			break;
	}
	if (n < 0)
		cout << -1 << endl;
	else 
		cout << tmp << endl;

}