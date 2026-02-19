#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<long long>());

    long long sum = 0;

    for (int i = 0; i < k; i++) {
        if (a[i] > 0)
            sum += a[i];
        else
            break;
    }

    cout << sum;
    return 0;
}
