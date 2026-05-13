#include <bits/stdc++.h> 
using namespace std;
#define SIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using ll=long long;
string solve()
{ int n,m,t,u=1,c=1;
  cin>>n>>m; vector<int> a(n);
  for(int i=0;i<n;++i) cin>>a[i];
  t=a[0];
  for(int i=1;i<n;++i)
  { if(a[i]==t) {u++; c=max(c,u);}
    else {t=a[i];u=1;}
  }
  if(c>=m) return "NO";
  return "YES";
}
int main()
{ SIO;
  int t;
  cin>>t;
  while(t--) 
  { 
   cout<<solve()<<"\n";
  }
  return 0;
}
