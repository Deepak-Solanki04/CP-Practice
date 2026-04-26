#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        vector<int> freq(10, 0);
 
        int answer = 0;
 
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
 
            if (freq[0] >= 3 &&
                freq[1] >= 1 &&
                freq[2] >= 2 &&
                freq[3] >= 1 &&
                freq[5] >= 1) {
                answer = i + 1; // steps are 1-based
                break;
            }
        }
 
        cout << answer << '\n';
    }
 
    return 0;
}
