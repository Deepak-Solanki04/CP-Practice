#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void generate(int depth, ll current, int x, int y, vector<ll>& v) {
    v.push_back(current);
 
    if (depth == 17) return;
 
    generate(depth + 1, current * 10 + x, x, y, v);
    generate(depth + 1, current * 10 + y, x, y, v);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    unordered_map<int, vector<ll>> mp;
 
    while (t--) {
        ll a;
        int n, x, y;
 
        cin >> a >> n >> x >> y;
 
        int key = x * 10 + y;
 
        if (mp[key].empty()) {
            auto& v = mp[key];
 
            generate(0, x, x, y, v);
            generate(0, y, x, y, v);
 
            sort(v.begin(), v.end());
        }
 
        auto& v = mp[key];
 
        auto it = lower_bound(v.begin(), v.end(), a);
 
        ll ans = (ll)3e18;
 
        if (it != v.end()) {
            ans = min(ans, *it - a);
        }
 
        if (it != v.begin()) {
            --it;
            ans = min(ans, a - *it);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}
