#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int ones = count(s.begin(), s.end(), '1');
        int zeros = n - ones;
 
        int ans = ones * (n - 1) + zeros;
        cout << ans << '\n';
    }
 
    return 0;
}
