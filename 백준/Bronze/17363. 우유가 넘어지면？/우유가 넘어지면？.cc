#include <iostream>
#include<map>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<char, char> mp;
	mp['.'] = '.';
	mp['O'] = 'O';
	mp['-'] = '|';
	mp['|'] = '-';
	mp['/'] = '\\';
	mp['\\'] = '/';
	mp['^'] = '<';
	mp['<'] = 'v';
	mp['v'] = '>';
	mp['>'] = '^';

	char arr[100][100];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = m - 1; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			cout << mp[arr[j][i]];
		}
		cout << '\n';
	}
	cout << '\n';

	
}