// Retired?
#include <bits/stdc++.h>
using namespace std;

namespace R = ranges;
namespace V = R::views;
auto ra(auto x, auto y) { return V::iota(x, y); }
auto ra(auto x) { return V::iota((decltype(x))0, x); }

using ll = long long;
using ull = long unsigned long;
using ld = double long;

int main() {
    ios::sync_with_stdio(!cin.tie(0));

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> e(n);
        for (int i : ra(1, n)) {
            int x;
            cin >> x;
            x--;
            e[x].push_back(i);
        }

        vector<int> md(n);
        vector<ll> sol(n);

        for (int i : ra(n) | V::reverse) {
            int d1 = -1, d2 = -1;
            ll sumsol = 0;
            for (int j : e[i]) {
                sumsol += sol[j];
                int v = md[j];
                if (v >= d1) {
                    d2 = d1;
                    d1 = v;
                } else if (v >= d2) {
                    d2 = v;
                }
            }
            if (d1 == -1) {
                md[i] = 1;
                sol[i] = 1;
            } else {
                md[i] = d1 + 1;
                sol[i] = sumsol + 1 + (d2 == -1 ? 0 : d2);
            }
        }

        println("{}", sol[0]);
    }
}
