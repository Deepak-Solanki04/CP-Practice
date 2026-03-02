#include <bits/stdc++.h>
using namespace std;
 
void sol()
{
    long n;
    cin >> n;
 
    vector<long long> arr(n);
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    vector<long long> psums(n+1);
    for (int j = 1; j<n+1; j++)
    {
        psums[j] = psums[j-1] + arr[j-1];
    }
    
    sort(arr.begin(), arr.end());
 
    vector<long long> spsums(n+1);
    for (int k = 1; k < n+1; k++)
    {
        spsums[k] = spsums[k-1] + arr[k-1];
    }
    
 
    int m;
    cin >> m;
    while(m--)
    {
        int type;
        long long l, r;
        cin >> type >> l >> r;
        if (type==1)
        {
            cout << psums[r] - psums[l-1] << "\n";
        }
        else 
        {
            cout << spsums[r] - spsums[l-1] << "\n";
        }
 
    }
 
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
    return 0;
}
