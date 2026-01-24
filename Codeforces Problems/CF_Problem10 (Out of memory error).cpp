#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
 
        vector<long long> orig(n), delta(n, 0);
        for (int i = 0; i < n; i++) cin >> orig[i];
 
        long long origMax = 0;
        for (int i = 0; i < n; i++)
            origMax = max(origMax, orig[i]);
 
        long long curMax = origMax;
 
        vector<int> modified;
        vector<bool> used(n, false);
 
        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            b--; 
 
            if (!used[b]) {
                used[b] = true;
                modified.push_back(b);
            }
 
            delta[b] += c;
            long long curVal = orig[b] + delta[b];
            curMax = max(curMax, curVal);
 
            
            if (curMax > h) {
                for (int idx : modified) {
                    delta[idx] = 0;
                    used[idx] = false;
                }
                modified.clear();
                curMax = origMax;
            }
        }
 
        
        for (int i = 0; i < n; i++) {
            cout << orig[i] + delta[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}
