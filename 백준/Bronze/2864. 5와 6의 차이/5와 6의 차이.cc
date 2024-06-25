#include<iostream>
#include <string>

using namespace std;

int main() {
	string s1 = "";
	string s2 = "";
	int max, min;

	cin >> s1;
	cin >> s2;

	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '5')
			s1[i] = '6';
	}
	for (int i = 0; i < s2.size(); i++){
		if (s2[i] == '5')
			s2[i] = '6';
	}
	max = stoi(s1) + stoi(s2);
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '6')
			s1[i] = '5';
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] == '6')
			s2[i] = '5';
	}
	min = stoi(s1) + stoi(s2);


	cout << min << " " << max << endl;
}