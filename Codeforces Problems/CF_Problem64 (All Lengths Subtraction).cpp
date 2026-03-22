#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
bool can_solve(int k, int n, vector<int>& p) {
    if (k == 0) {
        for (int x : p) if (x != 0) return false;
        return true;
    }
 
    for (int s = 0; s <= n - k; ++s) {
        bool possible = true;
        for (int i = s; i < s + k; ++i) {
            if (p[i] <= 0) {
                possible = false;
                break;
            }
        }
 
        if (possible) {
            for (int i = s; i < s + k; ++i) p[i]--;
            if (can_solve(k - 1, n, p)) return true;
            for (int i = s; i < s + k; ++i) p[i]++;
        }
    }
    return false;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
 
    if (can_solve(n, n, p)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
