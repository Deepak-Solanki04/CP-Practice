#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define fi0(i, n) for(int i = 0; i < (n); i++)
#define fi1(i, n) for(int i = 1; i < (n); i++)

void solve(){
    ll n;
    cin >> n;
    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        vll maxi1(n-1);
        vll maxi2(n-1);
        maxi1[0] = a[i];
        for(int j = 1; j < n-1; j++){
            ll idx = (i+j)%n;
            maxi1[j] = max(maxi1[j-1], a[idx]);
        }
        maxi2[n-2] = a[(i+n-1)%n];
        for(int j = n-3; j >= 0; j--){
            ll idx = (i+j+1)%n;
            maxi2[j] = max(maxi2[j+1], a[idx]);
        }
        ll ans = 0;
        for(int i = 0; i < n-1; i++) ans += min(maxi1[i], maxi2[i]);
        cout << ans << " ";
    }
    cout << "\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
