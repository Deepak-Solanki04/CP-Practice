
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<ll> vec(n);
        for(int i = 0 ; i < n; i++){
            cin>>vec[i];
        }
        
        sort(vec.begin() , vec.end());
        
        ll mid = vec[n/2];
        int c1 = 0 , c2=0;
        for(int i = 0 ; i < n/2 ; i++){
            if(vec[i] != mid) c1++;
        }
        for(int i = n/2 +1 ; i < n; i++){
            if(vec[i] != mid) c2++;
        }
        
        cout<<max(c1 , c2)<<endl;
    }
}
