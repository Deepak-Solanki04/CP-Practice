#include <bits/stdc++.h>
#define int long long
#define ld long double

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int tab[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tab[i][j];
        }
    }
    vector<int> a;
    for (int j = 0; j < m; j++) {
        a.push_back(-1);
    }
    int best = m;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            a.push_back(tab[i][j]);
        }
        sort(a.rbegin(), a.rend());
        for (int j = 0; j < m; j++) a.pop_back();
        int sum = 0;
        int cnt = 0;
        for (int j : a) {
            sum += j; cnt++;
            if (sum >= vec[i]) {
                best = min(best, cnt);
                break;
            }
        }
    }
    cout << best << '\n';
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t; while (t--) solve();
}
