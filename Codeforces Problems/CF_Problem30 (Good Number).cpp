#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int goodCount = 0;

    while (n--) {
        string s;
        cin >> s;

        vector<bool> seen(10, false);

        for (char c : s) {
            seen[c - '0'] = true;
        }

        bool ok = true;
        for (int d = 0; d <= k; d++) {
            if (!seen[d]) {
                ok = false;
                break;
            }
        }

        if (ok) goodCount++;
    }

    cout << goodCount;
    return 0;
}
