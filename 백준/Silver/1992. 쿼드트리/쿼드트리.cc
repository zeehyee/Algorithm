#include <iostream>
#include<vector>
#include<string>

using namespace std;

vector<vector<int>> arr;
string ans;

void cut(int x, int y, int len) {
	bool cutting = false;
	int color = arr[x][y];
	for (int i = x; i < x + len; i++) {
		for (int j = y; j < y + len; j++) {
			if (arr[i][j] != color) {
				cutting = true;
				break;
			}
		}
	}

	if (cutting) {
		len /= 2;
		ans += '(';
		cut(x, y, len);
		cut(x, y + len, len);
		cut(x + len, y, len);
		cut(x + len, y + len, len);
		ans += ')';
	}
	else {
		ans += to_string(color);
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string tmp;
	cin >> n;
	
	arr.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		for (int j = 0; j < n; j++) {
			arr[i][j] = tmp[j]-'0';

		}
	}
	cut(0, 0, n);

	cout << ans;
	return 0;
}