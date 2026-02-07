#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int,int>> d(n);

    for (int i = 0; i < n; i++) {
        cin >> d[i].first >> d[i].second;
    }

    sort(d.begin(), d.end()); 

    for (auto &dragon : d) {
        int x = dragon.first;
        int y = dragon.second;

        if (s <= x) {
            cout << "NO";
            return 0;
        }
        s += y;
    }

    cout << "YES";
    return 0;
}
