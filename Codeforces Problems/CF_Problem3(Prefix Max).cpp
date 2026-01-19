#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int &i : arr)
        {
            cin >> i;
        }
        cout << (*max_element(arr.begin(), arr.end())) * n << "\n";
 
 
    }
    return 0;
}
