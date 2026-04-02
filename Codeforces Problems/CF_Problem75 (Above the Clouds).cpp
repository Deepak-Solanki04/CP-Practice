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
        string s;
        cin >> s;
 
        bool ok = false;
 
        
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;
 
        for (int i = 1; i < n - 1; i++) {
            
            if (freq[s[i] - 'a'] > 1) {
                ok = true;
                break;
            }
        }
 
        cout << (ok ? "YES\n" : "NO\n");
    }
}
