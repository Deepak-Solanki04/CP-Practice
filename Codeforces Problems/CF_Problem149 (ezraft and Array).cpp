#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <tuple>
#include <bitset>
#include <set>
#include <utility>
#include <deque>
#include <cmath>
#include <queue>
#include <stack>
#include <numeric>
using namespace std;
#define endl '\n'
#define nl '\n'
#define fast ios::sync_with_stdio(false); cout.tie(nullptr),cin.tie(nullptr);
#define ll long long
#define yes cout << "YES"
#define no cout << "NO"
using vi = vector<int>;
using vll = vector <ll>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

void solve() {
    int n; cin >> n; if (n == 2) { cout << -1 << endl; return; }if (n == 1) { cout << 1 << endl; return; }ll sum = 3; vll ans; ans.push_back(1); ans.push_back(2); n -= 2;
    while (n) {
        ans.push_back(sum);
        sum += sum;
        n--;
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    fast;
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
