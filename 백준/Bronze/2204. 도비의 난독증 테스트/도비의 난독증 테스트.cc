#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string tmp;

	int n;
	
	
	while (true) {
		cin >> n;
		if (n == 0) break;

		vector<string> arr;
		map <string,int> ans; // 단어가 들어간 인덱스 번호, 소문자로만 바꾼 단어
		
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			arr.push_back(tmp);
			string s;
			for (int j = 0; j < arr[i].size(); j++) {
				if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
					s += (arr[i][j] + 32);
				else s += arr[i][j];
					
			}
			ans.insert({ s,i });
		}
		
		 
		cout << arr[ans.begin()->second] << "\n";
	}
}


