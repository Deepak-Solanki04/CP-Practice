#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x;
        cin >> x;
 
        int smallest = 9;
 
        while (x > 0) {
            int digit = x % 10;
            smallest = min(smallest, digit);
            x /= 10;
        }
 
        cout << smallest << "\n";
    }
 
    return 0;
}
