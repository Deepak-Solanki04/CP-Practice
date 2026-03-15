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
 
        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = 0;
            a[n-1] = 0;
        }
        else if (a[0] == -1) {
            a[0] = a[n-1];
        }
        else if (a[n-1] == -1) {
            a[n-1] = a[0];
        }
 
        for (int i = 1; i < n-1; i++) {
            if (a[i] == -1) a[i] = 0;
        }
 
        cout << llabs(a[n-1] - a[0]) << "\n";
 
        for (auto x : a) cout << x << " ";
        cout << "\n";
    }
}
