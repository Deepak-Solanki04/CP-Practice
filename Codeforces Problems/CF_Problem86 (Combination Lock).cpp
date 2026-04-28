#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    int n;
    while (t--) {
        cin >> n;
 
        if ((n & 1) == 0) {
            cout << -1 << "\n";
            continue;
        }
 
        for (int i = 2; i <= n; i += 2)
            cout << i << ' ';
 
        for (int i = 1; i <= n; i += 2)
            cout << i << ' ';
 
        cout << "\n";
    }
 
    return 0;
}
