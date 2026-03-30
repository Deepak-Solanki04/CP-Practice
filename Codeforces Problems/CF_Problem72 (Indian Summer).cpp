#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<pair<string, string>> s;
 
    while(n--) {
        string species, color;
        cin >> species >> color;
        s.insert({species, color});
    }
 
    cout << s.size() << endl;
}
