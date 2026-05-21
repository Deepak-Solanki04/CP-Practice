#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        if(n<=3) {
            cout<<1<<endl;
            continue;
        }
        long long ans = min(n-abs(x1-x2), abs(x1-x2)) + k;
        cout<<ans<<endl;
    }
    return 0;
}
