#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
 
        // Check arithmetic progression
        long long d = a[1] - a[0];
        bool ok = true;
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i - 1] != d) {
                ok = false;
                break;
            }
        }
 
        if (!ok) {
            cout << "NO\n";
            continue;
        }
 
        long long numerator = a[0] * n - a[n - 1];
        long long denominator = 1LL * n * n - 1;
 
        if (numerator % denominator != 0) {
            cout << "NO\n";
            continue;
        }
 
        long long y = numerator / denominator;
        long long x = a[0] - y * n;
 
        if (x >= 0 && y >= 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
