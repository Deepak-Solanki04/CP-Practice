#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[3];
    cin >> x[0] >> x[1] >> x[2];

    sort(x, x + 3);

    int mid = x[1];
    int distance = abs(x[0] - mid) + abs(x[2] - mid);

    cout << distance;
    return 0;
}
