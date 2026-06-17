#include <iostream>
#include <vector>
#include<algorithm>
#include<set>
#include<string>
#include <stack>
#include<queue>
#include <deque>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, k;
		cin >> n >> k;
		string a;
		cin >> a;
		int y = 0;
		for (int j = 0; j < k; j++)
		{
			int e = 0;
			for (int g = j; g < n; g += k)
			{
				if (a[g] == '1')
				{
					e++;
				}
			}
			if (e % 2 != 0)
			{
				y++;
			}
		}
		if (y > 0)
		{
			cout << "no" << endl;
		}
		else
		{
			cout << "yes" << endl;
		}
	}
}
