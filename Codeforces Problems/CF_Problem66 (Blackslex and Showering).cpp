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
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        long long total = 0;
        for (int i = 0; i < n - 1; i++) {
            total += abs(a[i] - a[i + 1]);
        }
 
        long long max_gain = 0;
 
 
        max_gain = max(max_gain, (long long)abs(a[0] - a[1]));
 
        
        max_gain = max(max_gain, (long long)abs(a[n - 2] - a[n - 1]));
 
        
        for (int i = 1; i < n - 1; i++) {
            long long gain = abs(a[i - 1] - a[i]) 
                           + abs(a[i] - a[i + 1]) 
                           - abs(a[i - 1] - a[i + 1]);
            max_gain = max(max_gain, gain);
        }
 
        cout << total - max_gain << "\n";
    }
 
    return 0;
}
