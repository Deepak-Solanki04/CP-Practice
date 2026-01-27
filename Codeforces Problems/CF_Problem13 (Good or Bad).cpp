#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        if (s.find("010") != string::npos || s.find("101") != string::npos) {
            cout << "Good\n";
        } else {
            cout << "Bad\n";
        }
    }

    return 0;
}
