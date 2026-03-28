#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if (min(a, c) >= min(b, d))
            cout << "Gellyfish\n";
        else
            cout << "Flower\n";
    }
}
