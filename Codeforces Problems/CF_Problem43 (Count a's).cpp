#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    int q;
    cin >> s >> q;
 
    int n = s.size();
    vector<int> prefix(n + 1, 0);
 
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1];
        if(s[i - 1] == 'a')
            prefix[i]++;
    }
 
    while(q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << "\n";
    }
 
    return 0;
}
