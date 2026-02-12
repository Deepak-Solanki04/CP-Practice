#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxVal = -1, minVal = 101;
    int maxIndex = 0, minIndex = 0;

    // leftmost max
    for (int i = 0; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
    }

    // rightmost min
    for (int i = 0; i < n; i++) {
        if (a[i] <= minVal) {
            minVal = a[i];
            minIndex = i;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) moves--;

    cout << moves;
    return 0;
}
