#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int aj = a[j - 1];
 
        if (k > 1) {
            cout << "YES\n";
        } else {
            int mx = *max_element(a.begin(), a.end());
            if (aj == mx) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
