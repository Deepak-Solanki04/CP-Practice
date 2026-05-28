#include<bits/stdc++.h>
using namespace std;
 
const char nl = '\n';
const char sp = ' ';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int &a : arr)
            cin >> a;
 
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
 
        int m = arr.size();
        vector<bool> marked(m);
 
        auto mark = [&] (int num, int l) {
            int r = m - 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (arr[mid] == num) {
                    marked[mid] = true;
                    return mid;
                } else if (arr[mid] < num) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            return -1;
        };
 
        bool ok = true;
        vector<int> ans;
 
        for (int i = 0; i < m; i++) {
            if (!marked[i]) {
                int am = k / arr[i];
                int L = i + 1;
                for (int j = 2; j <= am; j++) {
                    int ind = mark(arr[i] * j, L);
                    if (ind == -1) {
                        ok = false;
                        break;
                    }
                    L = ind + 1;
                }
                if (!ok)
                    break;
                ans.push_back(arr[i]);
            }
        }
 
        if (!ok) {
            cout << -1;
        } else {
            cout << ans.size() << nl;
            for (int a : ans)
                cout << a << sp;
        }
        cout << nl;
    }
 
    return 0;
}
