#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1000000007;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define print(...)
#endif



signed main(){
   ios::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      int x=0;
      for(int i=0;i<n;i++){
         cin>>a[i];
         x^=a[i];
      }
      if(n==1){
         cout<<0<<endl;
         continue;
      }
      int ans=0;
      for(int i=0;i<n;i++){
         int x1=x^a[i];
         if(x1<a[i]){
            ans++;
         }
      }
      if(x==0){
         ans++;
      }
      cout<<ans<<endl;
   }
   

}
