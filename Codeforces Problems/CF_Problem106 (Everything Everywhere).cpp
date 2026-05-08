#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){ 
        int n;
        cin >> n;
        vector<int>arr(n);
        for (auto &a : arr)
            cin >> a;
        int cont = 0;
        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) == gcd(arr[i], arr[i + 1]))
                cont++;
        }
        cout << cont << "\n";
    }
    return 0;
}
