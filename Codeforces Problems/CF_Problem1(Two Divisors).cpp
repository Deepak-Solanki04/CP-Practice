#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
 
 
ll gcd(ll a, ll b){
    while(b){
        int temp= b;
        b = a%b;
        a = temp;
    }
    return a;
}
 
ll lcm(ll a , ll b){
    return (a / gcd(a,b))*b;
}
 
 
void solve(){
    int a, b; cin>>a >>b;
    
    if(b% a == 0){
        cout << b * (b/a)<< endl;
    }else{
        cout << lcm(a, b)<< endl;
    }
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
