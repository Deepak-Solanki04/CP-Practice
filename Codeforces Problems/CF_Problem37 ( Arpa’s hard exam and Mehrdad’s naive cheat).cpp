#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    int cycle[4] = {8, 4, 2, 6};

    cout << cycle[(n - 1) % 4];

    return 0;
}
