#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool b=false, c=false;
        if(s[0]=='0') b=true;
        else c=true;
        int ct=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) continue;

            if(s[i]=='1'){
                if(b) ct++;
                c=true;
            }   
            else{
                if(c) ct++;
                b=true;
            }
        }
        if(ct==1) cout<<2<<endl;
        else cout<<1<<endl;
    }
}
