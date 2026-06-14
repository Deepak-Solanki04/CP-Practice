# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    if(n%12!=10)
    {
        cout<<(n%12)<<" "<<n-(n%12);
    }
    else if(n%12==10)
    {
        if(n!=10){
        cout<<22<<" "<<n-22;}
        else{cout<<-1<<endl;}
    }
    else if(n%12==0){
        cout<<0<<" "<<n;
    }
    else{
        cout<<-1;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        solve(n);
        cout<<endl;
    }
}
