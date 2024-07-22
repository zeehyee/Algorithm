#include <iostream>
#include <algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool tmp = true;
	int n, m, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		for (int j = 2; j < m; j++) {
			if (m % j == 0) {
				tmp = false;
				break;
			}
		}
		if (tmp)
			if(m!=1) cnt++;
		tmp = true;

	}
	cout << cnt;


	
}


