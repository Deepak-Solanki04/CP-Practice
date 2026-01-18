#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
 
        long long sum = a + b + c + n;
 
        
        if (sum % 3 != 0) {
            cout << "NO\n";
            continue;
        }
 
        long long target = sum / 3;
 
        
        long long A = target - a;
        long long B = target - b;
        long long C = target - c;
 
        
        if (A < 0 || B < 0 || C < 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
