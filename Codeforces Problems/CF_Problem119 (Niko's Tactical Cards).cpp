#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    
    long long mn = 0, mx = 0;
    vector <long long> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++){
        vector <long long> v = {mn - a[i], b[i] - mn, mx - a[i], b[i] - mx};
        sort(v.begin(), v.end());
        mn = v[0];
        mx = v.back();
    }
    
    cout << mx << "\n";
}
 
int main(int argc, char const *argv[])
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
