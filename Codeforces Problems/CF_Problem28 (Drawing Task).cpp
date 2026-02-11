#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<string> grid(n, string(m, '.'));

    while (q--) {
        int r1, c1, r2, c2;
        char ch;
        cin >> r1 >> c1 >> r2 >> c2 >> ch;

        if (r1 > r2) swap(r1, r2);
        if (c1 > c2) swap(c1, c2);

        for (int i = r1 - 1; i <= r2 - 1; i++) {
            for (int j = c1 - 1; j <= c2 - 1; j++) {
                grid[i][j] = ch;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << grid[i] << "\n";
    }

    return 0;
}
