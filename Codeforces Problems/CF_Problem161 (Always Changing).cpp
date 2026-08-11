#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        if (abs(one - zero) > 2)
            cout << -1 << endl;
        else
        {
            int one_op = 0, zero_op = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                    one_op++;
                else if (s[i] == '0' && s[i + 1] == '0')
                    zero_op++;
            }
            if (one_op == zero_op)
                cout << one_op + zero_op << endl;
            else
                cout << 2 * max(one_op, zero_op) - 1 << endl;
        }
    }
    return 0;
}
