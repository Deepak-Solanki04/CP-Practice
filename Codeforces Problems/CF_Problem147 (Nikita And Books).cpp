#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n ;

    vector<long long> s(n);
    for(int i = 0; i<n; i++)
    {
        cin>>s[i];
    }

    long long sur = 0;
    bool found = true;
    
    if(n==1)
    {
        cout <<"YES"<<endl;
        return;
    }

    for(int j = 0; j < n-1; j++)
    {
        sur = s[j] - (j+1);
        if(sur >= 0)
        {
            s[j] = s[j] - sur;
            s[j+1] = s[j+1] + sur;

            
        }

        

        else
        {
            found = false;
        }
    }

    if(s[n-1]<=s[n-2])
        {
            found = false;
        }

    if(found)
    {
        cout<< "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
        return;
    }       

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
return 0;
}
