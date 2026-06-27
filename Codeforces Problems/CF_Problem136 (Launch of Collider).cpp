#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 1e18;

    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == 'R' && s[i + 1] == 'L')
            ans = min(ans, (a[i + 1] - a[i]) / 2);
    }

    if(ans == 1e18)
        cout << -1;
    else
        cout << ans;

    return 0;
}
