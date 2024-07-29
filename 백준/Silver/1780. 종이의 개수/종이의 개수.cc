#include <iostream>
#include<vector>
#include<string>

using namespace std;

vector<vector<int>> arr;
int a = 0, b = 0, c = 0;

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
		len /= 3;
		cut(x, y, len);
		cut(x, y + len, len);
		cut(x, y + (2 * len), len);
		cut(x + len, y, len);
		cut(x + len, y + len, len);
		cut(x + len, y + (2 * len), len);
		cut(x + (2 * len), y, len);
		cut(x + (2 * len), y +len, len);
		cut(x + (2 * len), y + (2 * len), len);
		
	}
	else {
		if (color == -1) a++;
		else if (color == 0) b++;
		else c++;
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	arr.resize(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];

		}
	}
	cut(0, 0, n);

	cout << a << "\n" << b << "\n" << c;
	return 0;
}