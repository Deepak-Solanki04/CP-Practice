#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.rbegin(), a.rend());
 
        int teams = 0;
        long long cnt = 0;
 
        for (int i = 0; i < n; i++) {
            cnt++;
 
            if (cnt * a[i] >= x) {
                teams++;
                cnt = 0;
            }
        }
 
        cout << teams << "\n";
    }
 
    return 0;
}
