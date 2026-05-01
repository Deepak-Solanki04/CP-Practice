#include<bits/stdc++.h>
using namespace std;
 
bool binarysearch(vector<int>arr,vector<int>que)
{
    for(int j = 0; j < que.size(); j++) {
 
        int l = 0;
        int r = arr.size()-1;
        int m;
        bool found = false;
 
        while(l<=r)
        {
            m =(l+r)/2;
        
 
            if(arr[m]==que[j])
            {
                found = true;
                break;
            }
 
            else if (arr[m]<que[j])
            {
                l = m+1;
            }
 
            else
            {
                r = m-1;
            };
 
        }
 
        cout << (found ? "YES" "\n" : "NO" "\n");
    }
}
 
 
int main()
{
    int k,n;
    cin>> n >> k;
 
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
 
    binarysearch(arr,que);
 
    return 0;
    
}
