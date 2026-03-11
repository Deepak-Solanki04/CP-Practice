#include <bits/stdc++.h>
using namespace std;
 
int solve(long long n, long long k) {
    queue<pair<long long,int>> q;
    unordered_set<long long> vis;
 
    q.push({n,0});
    vis.insert(n);
 
    while(!q.empty()) {
        auto [x,t] = q.front();
        q.pop();
 
        if(x == k) return t;
 
        long long a = x/2;
        long long b = (x+1)/2;
 
        if(a >= k && !vis.count(a)) {
            vis.insert(a);
            q.push({a,t+1});
        }
 
        if(b >= k && !vis.count(b)) {
            vis.insert(b);
            q.push({b,t+1});
        }
    }
 
    return -1;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        long long n,k;
        cin >> n >> k;
        cout << solve(n,k) << "\n";
    }
}
