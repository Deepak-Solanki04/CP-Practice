#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        // prefix sum of ones
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }
 
        int i = 0, ans = 0;
 
        while (i + k <= n) {
            // check if all zeros in [i, i+k-1]
            if (pref[i + k] - pref[i] == 0) {
                ans++;
                i += k + 1; // skip hike + break
            } else {
                i++;
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
