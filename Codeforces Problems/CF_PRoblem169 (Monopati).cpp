#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;

void solve() {
    int n;ll ans=0;
    cin >> n;
    vector<int>a1(n+1),a2(n+1),pn(n+1),pm(n+1),sn(n+2),sm(n+2);
    for(int i=1;i<=n;i++)cin>>a1[i];
    for(int i=1;i<=n;i++)cin>>a2[i];
    pn[1]=pm[1]=a1[1];
    for(int i=2;i<=n;i++){
        pn[i]=min(pn[i-1],a1[i]);
        pm[i]=max(pm[i-1],a1[i]);
    }
    sn[n]=sm[n]=a2[n];
    for(int i=n-1;i>=1;i--){
        sn[i]=min(sn[i+1],a2[i]);
        sm[i]=max(sm[i+1],a2[i]);
    }
    int mv=2*n;
    vector<int>v(mv+2,1e9);
    for(int i=1;i<=n;i++){
        int mn=min(pn[i],sn[i]);
        int mx=max(pm[i],sm[i]);
        v[mn]=min(v[mn],mx);
    }
    vector<int>sf(mv+2,1e9);
    for(int i=mv;i>=1;i--){
        sf[i]=min(sf[i+1],v[i]);
    }
    for(int l=1;l<=mv;l++){
        int r=sf[l];
        if(r<=mv)ans+=(mv-r+1);
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
