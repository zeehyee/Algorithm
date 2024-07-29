#include <iostream>
#include<vector>

using namespace std;

int blue = 0, white = 0;
int arr[129][129];

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
		cut(x, y, len);
		cut(x + len, y, len);
		cut(x, y + len, len);
		cut(x + len, y + len, len);
	}
	else {
		if (color == 1) blue++;
		else white++;
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cut(0, 0, n);

	cout << white << "\n" << blue;
	return 0;
}