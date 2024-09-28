#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int, int>> people;

int n, score, panal;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> score >> panal;
        people.push_back(make_pair(score, panal));
    }

    sort(people.begin(), people.end(), compare);
	
    int num = people[4].first;
    for (k = 5; k < n; k++) {
        if (people[k].first == num)
            cnt++;
    }
    
    cout << cnt;
    return 0;
}