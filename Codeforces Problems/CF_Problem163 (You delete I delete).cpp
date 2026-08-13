#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200013;

ll a[N];

void solve() {
    int n;
    // cin>>n;
    int f[2]={};
    string s;
    cin>>s;
    for (auto c:s) {
        if (f[c&1])cout<<c;
        else f[c&1]=1;
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    int T=1;
    cin>>T;
    while (T--)solve();
}
