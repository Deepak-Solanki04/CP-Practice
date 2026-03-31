#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
 
        vector<int> x(n);
        for(int i = 0; i < n; i++) cin >> x[i];
 
        int l = x[0];
        int r = x[n - 1];
 
        int ans = min(abs(s - l) + (r - l), abs(s - r) + (r - l));
 
        cout << ans << "\n";
    }
}
