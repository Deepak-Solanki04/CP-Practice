#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> a(n, vector<int>(m));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
            sort(a[i].begin(), a[i].end());
        }
 
        vector<int> pos(n, -1); // pos[mod] = cow index
 
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            int mod = a[i][0] % n;
 
            for (int j = 0; j < m; j++) {
                if (a[i][j] % n != mod) {
                    ok = false;
                    break;
                }
            }
 
            if (!ok) break;
 
            if (pos[mod] != -1) {
                ok = false;
                break;
            }
 
            pos[mod] = i;
        }
 
        for (int i = 0; i < n; i++) {
            if (pos[i] == -1) ok = false;
        }
 
        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; i++) {
                cout << pos[i] + 1 << " ";
            }
            cout << '\n';
        }
    }
 
    return 0;
}
