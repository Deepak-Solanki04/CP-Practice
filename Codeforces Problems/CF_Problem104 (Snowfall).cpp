#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
void ss() {
    ll n;
    cin >> n;
    vector <ll> mas2;
    vector <ll> mas3;
    vector <ll> mas6;
    vector <ll> masn;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 6 == 0) {
            mas6.push_back(x);
            continue;
        }
        if (x % 3 == 0) {
            mas3.push_back(x);
            continue;
        }
        if (x % 2 == 0) {
            mas2.push_back(x);
            continue;
        }
        masn.push_back(x);
    }
    
    for (ll i = 0; i < mas6.size(); i++) {
        cout << mas6[i] << " ";
    }
    for (ll i = 0; i < mas3.size(); i++) {
        cout << mas3[i] << " ";
    }
    for (ll i = 0; i < masn.size(); i++) {
        cout << masn[i] << " ";
    }
    for (ll i = 0; i < mas2.size(); i++) {
        cout << mas2[i] << " ";
    }
    cout << endl;
}
 
int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ss();
    }
    return 0;
}
