#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        unordered_map<int, int> freq;

        int mx = 0;
        int val = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            freq[x]++;
            sum += x;

            if (freq[x] > mx) {
                mx = freq[x];
                val = x;
            }
        }


        int other = n - mx;

        if (mx <= other + 1) cout << sum << "\n";
        else {
            int usable = other + 2;
            int useless = mx - usable;
        
            cout << sum - useless * val << '\n';
        }
    }
}
