#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(2 * n + 1);
    vector<int> first_pos(n + 1, 0);

    for (int i = 1; i <= 2 * n; i++) {
        cin >> a[i];
    }

    vector<long long> dp(2 * n + 1, 0);

    for (int i = 1; i <= 2 * n; i++) {
        dp[i] = dp[i - 1] + 1;

        if (first_pos[a[i]] != 0) {
            int L = first_pos[a[i]];
            int len = i - L + 1;
            
            dp[i] = max(dp[i], dp[L - 1] + len * len);
        } else {
            first_pos[a[i]] = i;
        }
    }

    cout << dp[2 * n] << endl;
}

int32_t main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
