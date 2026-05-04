#include<bits/stdc++.h>
using namespace std;
 
int closesttoright(const vector<int>& arr, int x)
{
	int l = 0;
	int r = arr.size()-1;
	int ans = arr.size();
 
	while(l<=r)
	{
		int m=(l+r)/2;
 
		if(arr[m]<x)
			l = m+1;
		if(arr[m]>=x)
		{	ans = m;
			r = m-1;
		}	
	}
 
	return ans+1;
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int k,n,x;
    cin >> n >> k;
 
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    vector<int> que(k);
    for(int i = 0; i<k; i++)
    {
        cin >> que[i];
    }
 
    for(int j = 0; j<k; j++)
    {
        x = que[j];
        cout << closesttoright(arr,x) << "\n";
    }
 
    return 0;
}
