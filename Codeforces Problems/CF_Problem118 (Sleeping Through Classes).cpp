#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
 
    ll cnt=0,i=0,ti=0;
    while(i<n){
        if(s[i]=='1'){
            ti=k;
        }else {
            if(ti==0){
                cnt++;
            }else {
                ti--;
            }
        }
        i++;
    }
    cout<<cnt<<'\n';
}
 
int main ()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
