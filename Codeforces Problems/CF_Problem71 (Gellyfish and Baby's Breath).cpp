#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    vector<int> q(n);
    int mod =   998244353;
    vector<int> pow2(n);
    pow2[0] = 1;
    for(int i = 1 ; i < n ; i++){
        pow2[i] = (pow2[i-1]*2)%mod;
    }
    for(int i = 0 ; i < n ; i++) cin>>p[i];
    for(int i = 0 ; i < n ; i++) cin>>q[i];
    vector<int> r(n);
    int maxip = INT_MIN, maxiq = INT_MIN, idxp = -1, idxq = -1;
    for(int i = 0 ; i < n ; i++){
        if(maxip < p[i]){maxip = p[i]; idxp = i;}
        if(maxiq < q[i]){maxiq = q[i]; idxq = i;}
        
        int a = maxip, b = q[i-idxp];
        
        int c = maxiq, d = p[i-idxq];
        if(a<b) swap(a,b);
        if(c<d) swap(c,d);
        if(a > c) r[i] = (1LL*pow2[a] + pow2[b])%mod;
        else if(c > a) r[i] = (1LL*pow2[c] + pow2[d])%mod;
        else if(b>d) r[i] =( 1LL*pow2[a] + pow2[b])%mod;
        else  r[i] = (1LL*pow2[c] + pow2[d])%mod;
    }
    for(int i = 0 ; i < n ; i++) cout<<r[i]<<" ";
    cout<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;  
}
