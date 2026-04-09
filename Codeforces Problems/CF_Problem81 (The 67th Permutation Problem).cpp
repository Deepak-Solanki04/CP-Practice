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

        int l = 1, r = 3*n;

        while (l < r) {
            cout << r << " " << l << " " << r-1 << " ";
            l++;
            r -= 2;
        }
        cout << "\n";
    }

    return 0;
}
