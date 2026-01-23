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
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        sort(a.begin(), a.end());
 
        
        a.erase(unique(a.begin(), a.end()), a.end());
 
        int m = a.size();
        int ans = 0;
 
        for (int i = 0; i < m; i++) {
            int cnt = 0;
            long long start = a[i];
 
            for (int j = i; j < m; j++) {
                if (a[j] == start + cnt)
                    cnt++;
                else
                    break;
            }
 
            ans = max(ans, cnt);
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
