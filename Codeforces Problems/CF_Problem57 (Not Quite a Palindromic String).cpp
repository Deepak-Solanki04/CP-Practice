#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        string s;
 
        cin >> n >> k;
        cin >> s;
 
        int c0 = 0, c1 = 0;
 
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }
 
        int p = n / 2;
        int bad = p - k;
 
        if (c0 >= bad && c1 >= bad &&
            (c0 - bad) % 2 == 0 &&
            (c1 - bad) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
