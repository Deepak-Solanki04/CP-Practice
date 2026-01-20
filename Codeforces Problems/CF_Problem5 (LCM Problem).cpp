#include <bits/stdc++.h>
using namespace std;

void sol(int l, int r)
{
    int x = l;
    if ((l*2) <= r)
    {
        int y= l*2;
        cout << x <<" " << y <<"\n";

    }
    else  cout<< -1 <<" "<< -1 <<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while (t--)
    {
        int l,r;
        cin >> l >> r;
        sol(l,r);
    }
}
