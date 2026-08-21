#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    int mx = 0;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        int turns = (x + k - 1) / k;

        if (turns >= mx) {
            mx = turns;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
