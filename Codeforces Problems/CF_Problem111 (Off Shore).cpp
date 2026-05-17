#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define int long long
const int mod1 = 1e9 + 7;
const int mod2 = 998244353;
const double PI = acos(-1.0);
void solve(){
    int n;cin>>n;
    int x,y;
    cin>>x>>y;
    vector<int> a(n+1);
    vector<int> pre(n+1);
    for (int i=1;i<=n;i++){
        cin>>a[i];
        pre[i]=a[i]/x*y;
        pre[i]+=pre[i-1];
    } 
    int ans=0;
    for (int i=1;i<=n;i++){
        int t=pre[i-1]+pre[n]-pre[i];
        ans=max(ans,t+a[i]);
    }
    cout<<ans<<endl;
}
signed main(){
    IOS;
    int  T=1;
    cin>>T;
    while (T--) solve();
    return 0;
}
