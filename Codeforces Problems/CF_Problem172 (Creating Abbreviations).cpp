#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>hs(26,0);
    while(n--){
      string s;
      cin>>s;
      hs[s[0]-'a']++;
    }
    bool f=0;
    while(m--){
      string s;
      cin>>s;
      for(ll i=0;i<s.size();i++){
        if(hs[s[i]-'A']==0){
          f=1;
          break;
        }
      }
    }
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}
