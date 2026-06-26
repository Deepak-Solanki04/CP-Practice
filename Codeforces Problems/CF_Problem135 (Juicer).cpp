#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;

    int waste = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x <= b) {
            waste += x;
            if (waste > d) {
                ans++;
                waste = 0;
            }
        }
    }

    cout << ans;

    return 0;
}
