#include<bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main() {
    int t=0;
    cin>>t;
 
    while(t--) {
     int n ; 
     cin>>n;
     vector<ll>a(n);
     vector<int>b;
     for (int  u = 0 ; u < n ; u++) {
        cin>>a[u];
     }
     for (int i = 0 ; i< n ; i++) {
        int p = 0;
        int q = 0;
        for (int j = i+1 ; j < n ; j++) {
            if(a[i] < a[j]) {
                p++;
            }
            else if (a[i] > a[j]) {
                q++;
            }
        }
        b.push_back(max(p,q));
     }
     for (int h : b) {
        cout<<h <<' ';
     }
     cout<<endl;
    }
}
