#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        vector<int>div(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(i%j!=0) continue;
                if((i/j)!=j) {div[j]++; div[i/j]++;}
                else div[j]++;
            }
        }
        for(auto x: div){
           ans+=1ll*x*x;
        }
        cout<<ans<<"\n";
    }
}
