#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t9; 
    cin >> t9;
    while(t9--){
    ll a,b,c,d;
    cin>>a>>b;
    ll k=a+2*b;
    int f=0;
    ll t=-1,t2=-1;
  for(int i=1;i<100000;i++){
    if((k-i)%(2*i+1)==0&&(((k-i)/(2*i+1))>0)){
        t=i;
        t2=(k-i)/(2*i+1);
        if(a<abs(t2-t)){
            continue;
        }
       f=1;
        break;
    }
  }
  if(f==1){
    cout<<t<<" "<<t2<<endl;
  }else{
    cout<<-1<<endl;
  }
    // cout<<<<endl;
}}
