#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        if (n < 2 * m) {
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool flag = true;

        for (int i = 0; i < m; i++) {
            if (a[i] >= b[i] || a[n - m + i] <= b[i]) {
                flag = false;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
