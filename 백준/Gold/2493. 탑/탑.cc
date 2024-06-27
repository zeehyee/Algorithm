#include <iostream>
#include <stack>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n + 1);
    stack<pair<int,int>> st;
    st.push({ 100000001,0 });

    for (int i = 1; i <= n; i++) {
        cin >> heights[i];
    }
    for (int i = 1; i <= n; i++) {
        int h = heights[i]; //first = 높이 / 인덱스
        while (st.top().first < h) {
            st.pop();
        }
        cout << st.top().second << " ";
        st.push({ h, i });
    }
    return 0;
}

