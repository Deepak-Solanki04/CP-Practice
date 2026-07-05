#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define F first
#define S second
#define ll long long

void solve() {
    int x;
    cin>>x;
    int pow10 = 1;
    while(pow10<x){
        pow10*=10;
    }
    cout<<pow10+1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
