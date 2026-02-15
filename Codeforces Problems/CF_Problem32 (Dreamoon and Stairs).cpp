#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minMoves = (n + 1) / 2;

    for (int moves = minMoves; moves <= n; moves++) {
        if (moves % m == 0) {
            cout << moves;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
