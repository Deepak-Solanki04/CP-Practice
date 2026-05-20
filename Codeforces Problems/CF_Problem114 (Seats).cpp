#include<bits/stdc++.h>
 
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
 
using namespace std;
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') cnt++;
    }
    if(cnt==0) cout<<(n+2)/3<<endl;
    else{
        int minm=cnt;
        int cnt1=0;
        int i=0;
        while(s[i]!='1'){
            cnt1++;
            i++;
        }
        minm+=(cnt1+1)/3;
        int cnt2=0;
        int j=n-1;
        while(s[j]!='1'){
            cnt2++;
            j--;
        }
        minm+=(cnt2+1)/3;
        cnt=0;
        for(int k=i+1;k<=j;k++){
            if(s[k]=='0') cnt++;
            else{
                minm+=cnt/3;
                cnt=0;
            }
        }
        cout<<minm<<endl;
    }
}
int main(){
    auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });
    
    quick();
    
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
