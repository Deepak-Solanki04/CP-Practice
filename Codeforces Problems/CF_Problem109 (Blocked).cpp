#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() 
{
    int n ; 
    cin >> n ; 
 
    vector <int> arr(n) ; 
    for(int i = 0 ; i<n;i++) {cin>>arr[i] ;  }
 
    sort(arr.begin(),arr.end()) ;
    for(int i = 0 ; i<n-1 ; i++) {if(arr[i]==arr[i+1]) {cout <<-1 ; return ; } }
    
    for(int i = n-1 ; i>=0 ; i--) {cout <<arr[i] << " " ; }
    
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; 
    cin>>t ;
    while(t--) {
        solve(); 
        cout<<"\n" ; 
               }
}
