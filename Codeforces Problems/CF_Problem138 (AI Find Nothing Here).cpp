
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;

void solve(){
   int n,m,r,c;
   cin>>n>>m>>r>>c;
   int N=998244353;
   ll count=1LL*n*m-1LL*(n-r+1)*(m-c+1);
   ll ans=1;
   ll base=2;
   while(count>0){
      if(count & 1){
         ans=(ans*base)%N;
      }
      base=(base*base)%N;
      count>>=1;
   }
   cout<<ans<<"\n";
}
int main(){
   cin.sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}
