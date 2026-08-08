#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll len=s.size();
    ll first=-1;
    for(ll i=1;i<n-1;i++){
        if(s[i-1]==s[i+1]&&s[i]!=s[i-1]){
            first=i;
            break;
        }
    }

    if(first==-1){
        ll t=0;
        for(ll i=1;i<n-1;i++){
            if(s[i-1]!=s[i+1]&&s[i]!=s[i-1]&&s[i]!=s[i+1]){
                t=i;
                break;
            }
        }
        if(t!=0){
            for(ll i=t;i<n-1;i++) s[i]=s[i+1];
            len--;
            for(ll i=0;i<n-1;i++){
            ll j=i;
            while(j<n-1&&s[i]==s[j]){
                j++;
            }
            if(j-i>=2) len=len-(j-i)+1;
            i=j-1;
           }
           cout<<len<<"\n";
        }

        else{
            for(ll i=0;i<n;i++){
            ll j=i;
            while(j<n&&s[i]==s[j]){
                j++;
            }
            if(j-i>=2) len=len-(j-i)+1;
            i=j-1;
        }
        cout<<len<<"\n";
        }
    }

    else{
        for(ll i=first;i<n-1;i++){
            s[i]=s[i+1];
        }
        len--;
        for(ll i=0;i<n-1;i++){
            ll j=i;
            while(j<n-1&&s[i]==s[j]){
                j++;
            }
            if(j-i>=2) len=len-(j-i)+1;
            i=j-1;
        }
        cout<<len<<"\n";
    }
    


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
