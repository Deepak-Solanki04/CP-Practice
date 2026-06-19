#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,l,r;
        cin >> n >> l >> r;
        vector<int> pre(n+1,0);
        for(int i=1; i<=n; i++) pre[i]=i;
        pre[r]=pre[l-1];
        for(int i=1; i<=n; i++){
            cout << (pre[i]^pre[i-1]) << " ";
        }
        cout << "\n";
    }
}
