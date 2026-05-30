#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    int x=0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]) x = max(x,arr[i-1]-arr[i]);
    }
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]) arr[i]+=x;
        if(arr[i]<arr[i-1]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
