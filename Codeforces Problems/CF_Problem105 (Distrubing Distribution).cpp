#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
 
void input(vector<ll>&arr){
  for(auto &g:arr) cin>>g;
}
 
void output(vector<ll>&arr){
  for(auto g:arr) cout<<g<<" ";
  cout<<endl;
}
 
ll solve(){
  int n;
  cin>>n;
  vector<ll>arr(n);
  input(arr);
  ll one=0,sum=0;
  for(auto g:arr){
    if(g==1) one++;
    sum+=g;
  }
  if(one==n) return 1;
  int a=0;
  for(auto &g:arr){
    if(g==1) a++;
    if(a>=1 && g>1){
      sum-=a;
      a=0;
    }
  }
  if(a>=1){
      sum=sum-a+1;
      a=0;
    }
  return sum;
  
  
  
  // output();
}
int main() 
{
  
   int t;
   cin>>t;
   while(t--){
     cout<<solve()<<endl;
   }
    // cout << "Hello, World!";
    return 0;
}
