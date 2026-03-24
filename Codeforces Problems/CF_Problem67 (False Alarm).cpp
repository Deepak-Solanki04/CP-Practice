#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int L = -1, R = -1;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (L == -1) L = i;
                R = i;
            }
        }
 
        if (R - L + 1 <= x) cout << "YES\n";
        else cout << "NO\n";
    }
}
