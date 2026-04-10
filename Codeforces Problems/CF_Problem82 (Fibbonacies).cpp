#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
 
        vector<int> candidates = {
            a1 + a2,
            a4 - a2,
            a5 - a4
        };
 
        int ans = 0;
 
        for (int x : candidates) {
            int count = 0;
 
            if (x == a1 + a2) count++;
            if (a4 == a2 + x) count++;
            if (a5 == x + a4) count++;
 
            ans = max(ans, count);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}
