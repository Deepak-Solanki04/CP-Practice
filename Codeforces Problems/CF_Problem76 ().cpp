#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
 
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        int mn = min(h, l);
 
        int A = 0, B = 0, C = 0;
 
        for (int x : a) {
            if (x <= mn) A++;
            else if (x <= h) B++;
            else if (x <= l) C++;
        }
 
        int pairs = min(B, C);
        B -= pairs;
        C -= pairs;
 
        int useA = min(A, B + C);
        pairs += useA;
        A -= useA;
 
        pairs += A / 2;
 
        cout << pairs << '\n';
    }
 
    return 0;
}
