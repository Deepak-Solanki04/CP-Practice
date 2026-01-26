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
 
        vector<int> p(n), suf(n);
        for (int i = 0; i < n; i++) cin >> p[i];
 
        
        suf[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = max(suf[i + 1], p[i]);
        }
 
        int l = -1, r = -1;
 
        
        for (int i = 0; i < n - 1; i++) {
            if (p[i] < suf[i + 1]) {
                l = i;
 
                
                for (int j = n - 1; j > i; j--) {
                    if (p[j] == suf[i + 1]) {
                        r = j;
                        break;
                    }
                }
                break;
            }
        }
 
        
        if (l != -1) {
            reverse(p.begin() + l, p.begin() + r + 1);
        }
 
        for (int x : p) cout << x << " ";
        cout << "\n";
    }
 
    return 0;
}
