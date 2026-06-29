#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;

    
    if (k > n)
    {
        cout << n << "\n";
        return;
    }

    long long count = 0;
    while (n > 0)
    {
        long long take = min(k, n);
        count += take;
        n -= take;

        n = n >> 1;
    }
    cout << count << "\n";
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
