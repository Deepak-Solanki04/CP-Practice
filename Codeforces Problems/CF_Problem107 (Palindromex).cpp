#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
int solve(int l, int r) {
    set<int> s;
    for(int i = 0; i <= n; i++) s.insert(i);
    while(l >= 0 && r < 2*n && a[l] == a[r]) {
        s.erase(a[l]);
        l--; 
        r++;
    }
    return *s.begin();
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        cin >> n;
        a = vector<int>(2*n);
 
        int x = -1, y;
        for(int i = 0; i < 2*n; i++) {
            cin >> a[i];
            if(a[i] == 0) {
                if(x == -1) x = i;
                else y = i;
            }
        }
 
        cout << max({
            solve(x, x),
            solve(y, y),
            solve((x + y) / 2, (x + y + 1) / 2)
        }) << "\n";
    }
}
