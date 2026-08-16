#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{

int a,b,c;
cin>>a>>b>>c;
int y=a+b+c;
int k=max(a,max(b,c)) ;
int j=min(a,min(b,c)) ;
int o=y-k;
 if(a==b && b==c)
  cout<<0<<endl;
else if(o<k){
    cout<<o-j<<endl;
}
 else{
   cout<<k-j<<endl;
 }
}







}
