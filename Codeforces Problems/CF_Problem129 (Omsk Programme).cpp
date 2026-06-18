#include <bits/stdc++.h>                                                                                                                                       
using namespace std;                                                                                                                                           
                                                                                                                                                               
typedef long long ll;                                                                                                                                          
                                                                                                                                                               
int main() {                                                                                                                                                   
    ios::sync_with_stdio(false);                                                                                                                               
    cin.tie(nullptr);                                                                                                                                          
                                                                                                                                                               
    int t;                                                                                                                                                     
    cin >> t;                                                                                                                                                  
    while (t--) {                                                                                                                                              
        ll a, b, x;                                                                                                                                            
        cin >> a >> b >> x;                                                                                                                                    
                                                                                                                                                               
                                                                                          
        vector<pair<ll, int>> A;                                                                                                                               
        ll v = a;                                                                                                                                              
        int k = 0;                                                                                                                                             
        while (v > 0) {                                                                                                                                        
            A.emplace_back(v, k);                                                                                                                              
            v /= x;                                                                                                                                            
            ++k;                                                                                                                                               
        }                                                                                                                                                      
        A.emplace_back(0, k);                                                                                                                                  
                                                                                                                                                               
                                                                                        
        vector<pair<ll, int>> B;                                                                                                                               
        v = b;                                                                                                                                                 
        k = 0;                                                                                                                                                 
        while (v > 0) {                                                                                                                                        
            B.emplace_back(v, k);                                                                                                                              
            v /= x;                                                                                                                                            
            ++k;                                                                                                                                               
        }                                                                                                                                                      
        B.emplace_back(0, k);                                                                                                                                  
                                                                                                                                                               
        ll ans = LLONG_MAX;                                                                                                                                    
        for (auto &p1 : A) {                                                                                                                                   
            for (auto &p2 : B) {                                                                                                                               
                ll v1 = p1.first, v2 = p2.first;                                                                                                               
                int k1 = p1.second, k2 = p2.second;                                                                                                            
                ll c = max(v1, v2);                                                                                                                            
                ll cost = (ll)k1 + k2 + (c - v1) + (c - v2);                                                                                                   
                if (cost < ans) ans = cost;                                                                                                                    
            }                                                                                                                                                  
        }                                                                                                                                                      
        cout << ans << '\n';                                                                                                                                   
    }                                                                                                                                                          
    return 0;                                                                                                                                                  
} 
