#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;
        if ((x & 1) && (y & 1)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}
