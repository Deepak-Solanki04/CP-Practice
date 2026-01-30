#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    long long sumA = 0, sumB = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sumA += x;
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        sumB += x;
    }

    if (sumA == sumB)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
