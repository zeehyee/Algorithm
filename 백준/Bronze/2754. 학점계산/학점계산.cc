#include<iostream>
#include<string>

using namespace std;
int main() {
	string s = "";
	float score = 0.0;

	cin >> s;

	switch (s[0]) {
	case 'A':
		score = 4.3;
		break;
	case 'B':
		score = 3.3;
		break;
	case 'C':
		score = 2.3;
		break;
	case 'D':
		score = 1.3;
		break;
	case 'F':
		score = 0.0;
	}

	if (s[1] == '0')
		score -= 0.3;
	else if (s[1] == '-')
		score -= 0.6;
	
	cout << fixed;
	cout.precision(1);

	cout << score;


}