#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    vector<char> ans;
    stack<int> tmp;
    bool found = true;
    int n, number = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (!tmp.empty() && tmp.top() == a) {
            ans.push_back('-');
            tmp.pop();
        }
        else if (number <= a) {
            while (number <= a) {
                tmp.push(number++);
                ans.push_back('+');
            }
            ans.push_back('-');
            tmp.pop();
        }
        else {
            found = false;
        }
    }

    if (found) {
        for (char c : ans) {
            cout << c << '\n';
        }
    }
    else {
        cout << "NO" << '\n';
    }

    return 0;
}
