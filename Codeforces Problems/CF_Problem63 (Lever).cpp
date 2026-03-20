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
 
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
 
        int excess = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                excess += (a[i] - b[i]);
            }
        }
 
        cout << excess + 1 << "\n";
    }
 
    return 0;
}
