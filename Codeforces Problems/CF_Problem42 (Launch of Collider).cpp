#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    long long ans = LLONG_MAX;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') {
            long long t = (x[i + 1] - x[i]) / 2;
            ans = min(ans, t);
        }
    }

    if (ans == LLONG_MAX)
        cout << -1;
    else
        cout << ans;

    return 0;
}
