#include <bits/stdc++.h>
using namespace std;
#define fastio() \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)
#define int long long
#define pb push_back

int32_t main(){

    fastio();
    int t=1;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>v(n+1);
      for(int i=1;i<=n;i++)cin>>v[i];
      vector<int>seg;
      seg.pb(0);
      for(int i=0;i<k;i++){
        int x;
        cin>>x;
        seg.pb(x);
      }
      sort(seg.begin(),seg.end());
      int ans=0;
      for(int i=0;i<seg.size()-1;i++){
        int lo=seg[i]+1;
        int hi=seg[i+1];
        int temp=0;
        for(int j=lo;j<=hi;j++){
           temp+=v[j];
        }
        ans+=(abs(temp));
      }
      for(int i=seg.back()+1;i<=n;i++)ans+=v[i];
      cout<<ans<<endl;

    }

    return 0;
}
