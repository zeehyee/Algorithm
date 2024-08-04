#include <iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int cut(int n,int r,int c) {
	if (r == 0 && c == 0)
		return 0;
	if (n==0){
		return 1;
	}
	else {
		int half = n/2;
		if (r < half && c < half) { // 1
			return cut(half, r, c);
		}
		else if (r < half && c >= half) { // 2
			return half * half + cut(half, r, c - half);
		}
		else if (r >= half && c < half) { // 3
			return 2 * half * half + cut(half, r - half, c);
		}
		else if (r >= half && c >= half) { // 4
			return 3 * half * half + cut(half, r - half, c - half);
		}
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, len;
	cin >> n;
	len = pow(2, n);

	int r, c;
	cin >> r >> c;
	

	cout <<  cut(len,r,c);
	
	return 0;
}