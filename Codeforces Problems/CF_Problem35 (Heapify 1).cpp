#include <bits/stdc++.h>
using namespace std;

int findRoot(int x) {
    while (x % 2 == 0)
        x /= 2;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin() + 1, b.end());

        unordered_map<int, vector<int>> groupA, groupB;

        for (int i = 1; i <= n; i++) {
            int root = findRoot(i);
            groupA[root].push_back(a[i]);
            groupB[root].push_back(b[i]);
        }

        bool ok = true;

        for (auto &p : groupA) {
            auto &v1 = p.second;
            auto &v2 = groupB[p.first];

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());

            if (v1 != v2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
