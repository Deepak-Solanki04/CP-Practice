#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    int s = x + y;
    long long ans = (n + s-1) / s;
    int left = max(0,n - x * z);
    s = x + 10 * y;
    ans = min(ans,  z + 1ll * (left + s-1) / s);
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
