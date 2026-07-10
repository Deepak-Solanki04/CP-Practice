#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, c;
    cin >> n >> c;

    vector<ll> a(n), b(n), temp_a, temp_b;

    for(ll i = 0; i<n; i++) cin >> a[i];
    for(ll i = 0; i<n; i++) cin >> b[i];

    temp_a = a; temp_b = b;
    ll reorder_cost = c;

    sort(temp_a.begin(), temp_a.end()); sort(temp_b.begin(), temp_b.end());

    for(ll i = 0; i<n; i++){
        if(temp_a[i] < temp_b[i]){
            cout << "-1\n";
            return;
        }
        reorder_cost += temp_a[i]-temp_b[i];
    }

    ll cur_cost = 0;

    for(ll i = 0; i<n; i++){
        if(a[i] < b[i]) {
            cout << reorder_cost << '\n';
            return;
        }
        cur_cost += a[i]-b[i];
    }

    cout << min(reorder_cost, cur_cost) << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) solve();
}
