#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<long long> a(n+2), b(n+2);
 
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
 
        vector<long long> c(n+2), suf(n+3), best(n+2), pref(n+2);
 
        for (int i = 1; i <= n; i++)
            c[i] = max(a[i], b[i]);
 
        for (int i = n; i >= 1; i--)
            suf[i] = max(c[i], suf[i+1]);
 
        for (int i = 1; i <= n; i++)
            best[i] = max(b[i], suf[i]);
 
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i-1] + best[i];
 
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l-1] << " ";
        }
 
        cout << "\n";
    }
}
