#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min_v = 1e9 + 7, max_v = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        min_v = min(min_v, a[i]);
        max_v = max(max_v, a[i]);
    }
 
    vector<int> target = a;
    sort(target.begin(), target.end());
 
    
    bool sorted = true;
    for (int i = 0; i < n; ++i) {
        if (a[i] != target[i]) {
            sorted = false;
            break;
        }
    }
 
    if (sorted) {
        cout << -1 << "\n"; 
        return;
    }
 
    
    int ans = max_v - min_v;
 
    
    for (int i = 0; i < n; ++i) {
        if (a[i] != target[i]) {
            
            int move_out = max(a[i] - min_v, max_v - a[i]);
            
            int move_in = max(target[i] - min_v, max_v - target[i]);
            
            ans = min({ans, move_out, move_in});
        }
    }
 
    cout << ans << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
