#include <bits/stdc++.h>
using namespace std;
 
int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    map<int, int> freq, dist;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 1) {
        freq[2]++;
        dist[2]++;
      }
      int steps = 0;
      while (1) {
        if (i == 0 || freq.count(x)) {
          freq[x]++;
          dist[x] += steps;
        }
        if (x == 1) break;
        if (x%2 == 0) x /= 2;
        else x++;
        steps++;
      }
    }
    int ans = 1e9;
    for (auto& [k, v]: freq) {
      if (v == n) ans = min(ans, dist[k]);
    }
    cout << ans << '\n';
  }
}
