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
        list<int> alive;
        int a[n];
        list<int>::iterator w[n];
        auto c_next = [&alive](const list<int>::iterator& it) {
            return next(it) == alive.end() ? alive.begin() : next(it);
        };
        auto c_prev = [&alive](const list<int>::iterator& it) {
            return it == alive.begin() ? --alive.end() : prev(it);
        };
        auto hole = [&](const list<int>::iterator& it) {
            return a[*it] <= min(a[*c_next(it)], a[*c_prev(it)]);
        };
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            w[i] = alive.insert(alive.end(), i);
        }
        queue<int> q;
        {
            int i = 0;
            for (auto it = alive.begin(); it != alive.end(); ++it, ++i)
                if (hole(it))
                    q.push(i);
        }
        long long ans = 0;
        bool mark[n] = {};
        while (alive.size() > 1) {
            auto i = q.front();
            q.pop();
            if (mark[i])
                continue;
            mark[i] = true;
            auto it = w[i];
            ans += min(a[*c_next(it)], a[*c_prev(it)]);
            auto jt = c_next(it);
            alive.erase(it);
            it = jt;
            if (hole(it))
                q.push(*it);
            it = c_prev(it);
            if (hole(it))
                q.push(*it);
        }
        cout << ans << '\n';
    }
}
