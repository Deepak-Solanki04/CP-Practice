#include <iostream>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string ans = s.substr(0, s.size() - 2);
        ans += 'i';
        cout << ans << endl;
    }
 
    return 0;
}
