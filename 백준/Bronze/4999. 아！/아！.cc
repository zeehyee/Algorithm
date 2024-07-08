#include<iostream>

using namespace std;
int main() {
	string s, k;
	cin >> s >> k;
	if (s.size()-1 >= k.size() - 1)
		cout << "go";
	else
		cout << "no";



}