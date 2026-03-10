#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    int best = a[0];
    int worst = a[0];
    int count = 0;
 
    for(int i = 1; i < n; i++) {
        if(a[i] > best) {
            count++;
            best = a[i];
        }
        else if(a[i] < worst) {
            count++;
            worst = a[i];
        }
    }
 
    cout << count << endl;
}
