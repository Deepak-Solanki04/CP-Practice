#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans = 1e18;
        vector<long long> a(n);
        long long sum = 0;
        long long maxi = 0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum += a[i];
            maxi = max(maxi, a[i]);
            long long l = 1;
            long long r = maxi + 1;

            while (r - l > 1) {
                long long mid = (l + r) / 2;
                
                if (mid * (i + 1) <= sum) {
                    l = mid;
                } else {
                    r = mid;
                }
            }
            ans = min(ans, l);
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
