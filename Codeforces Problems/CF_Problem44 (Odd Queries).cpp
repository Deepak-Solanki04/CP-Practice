#include<bits/stdc++.h>
using namespace std;
 
 
void sol(int t)
{
    int n, q;
    cin >> n >> q;
 
    vector<int> arr(n);
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    vector<int> psums(n+1);
    for (int j = 1; j < n+1; j++ )
    {
        psums[j]= psums[j-1] + arr[j-1];
    }
 
 
    while (q--)
    {
        int l, r ,k;
        cin >> l >> r >> k;
        int psum = psums[r] - psums[l-1];
        int fsum = psums[n] - psum + (((r-l)+1)*k);
        if (fsum % 2!=0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        sol(t);
    }
    return 0;
}
