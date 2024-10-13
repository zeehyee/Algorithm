#include <iostream>
#include <vector>
using namespace std;

int k = 1000000000 + 7;
vector <long long> arr;
long long sum = 0;
long long a;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
   
   
    for (int i = 0; i < n - 1; i++) {
        
        cin >> a;
        if (i == 0) {
            arr.push_back(a);
            sum += (a % k);
            continue;
        }
        else {
            int tmp = (a * arr[i - 1] + a) % k;
            arr.push_back(tmp);
            sum += (tmp % k);
        }
    }
    cout << sum % k;
}