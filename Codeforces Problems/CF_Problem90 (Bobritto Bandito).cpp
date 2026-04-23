#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
 
        int left_exp = -l;
        int right_exp = r;
        int need = n - m;
 
        int remove_left = min(left_exp, need);
        l += remove_left;
 
        int remove_right = need - remove_left;
        r -= remove_right;
 
        cout << l << " " << r << "\n";
    }
    return 0;
}
