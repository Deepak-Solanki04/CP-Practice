#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> deg(n+1, 0);

    while (m--)
    {
        int x ,y;
        cin >> x >> y;

        deg[x]++;
        deg[y]++;
    }

    int one =  0, two = 0, big = 0;

    for(int i = 1; i<=n; i++)
    {
        if(deg[i]==1) 
            one++;

        else if (deg[i]==2) 
            two++;

        else if (deg[i]==n-1) 
            big++;
    }

    if (one == 2 && two == n - 2)
        cout << "bus topology\n";

    else if (two == n)
        cout << "ring topology\n";

    else if (one == n - 1 && big == 1)
        cout << "star topology\n";

    else
        cout << "unknown topology\n";

    return 0;
}

