#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int n;
long long sum = 0;

int yagsu(int s) {

    int cnt = 0;

    for (int i = 1; i <= s; i++) {
        if (s % i == 0) {
            cnt += i;
        }
    }
    return cnt+s;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += (n / i) * i;
    }
    cout << sum ;

    
   
    return 0;
}