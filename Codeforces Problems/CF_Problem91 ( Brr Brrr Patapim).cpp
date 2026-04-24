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
 
        vector<vector<int>> G(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> G[i][j];
            }
        }
 
        vector<int> p(2 * n + 1, 0);
        vector<bool> used(2 * n + 1, false);
 
        // Fill p[2..2n]
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int idx = i + j + 2; // since i,j are 0-based
                p[idx] = G[i][j];
            }
        }
 
        // mark used
        for (int i = 2; i <= 2 * n; i++) {
            used[p[i]] = true;
        }
 
        // find missing for p[1]
        for (int x = 1; x <= 2 * n; x++) {
            if (!used[x]) {
                p[1] = x;
                break;
            }
        }
 
        // output
        for (int i = 1; i <= 2 * n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
}
