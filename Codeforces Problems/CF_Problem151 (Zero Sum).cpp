#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for(ll i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum == 0){
        cout << "YES\n";
        return;
    }
    if(llabs(sum)%2 != 0){
        cout << "NO\n";
        return;
    }
    if(sum < 0){
        ll i = 1;
        while(i < n){
            if(sum == 0){
                cout << "YES\n";
                return;
            }
            if(arr[i] == -1 && arr[i-1] == -1){
                sum += 4;
                i += 2;
                continue;
            }
            i++;
        }
        if(sum == 0){
                cout << "YES\n";
                return;
            }
    }else{
        ll i = 1;
        while(i < n){
            if(sum == 0){
                cout << "YES\n";
                return;
            }
            if(arr[i] == 1 && arr[i-1] == 1){
                sum -= 4;
                i += 2;
                continue;
            }
            i++;
        }
        if(sum == 0){
                cout << "YES\n";
                return;
            }
    }
    cout << "NO\n";
    return;
}
int main(){
    ios_base :: sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
