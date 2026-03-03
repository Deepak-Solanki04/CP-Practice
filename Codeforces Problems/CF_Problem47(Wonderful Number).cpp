#include <bits/stdc++.h>
using namespace std;

bool isOdd(long long n) {
    return (n % 2 == 1);
}

bool isBinaryPalindrome(long long n) {
    string s = "";

    while (n > 0) {
        s += (n % 2) + '0';
        n /= 2;
    }

    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }

    return true;
}

int main() {
    long long N;
    cin >> N;

    if (isOdd(N) && isBinaryPalindrome(N))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
