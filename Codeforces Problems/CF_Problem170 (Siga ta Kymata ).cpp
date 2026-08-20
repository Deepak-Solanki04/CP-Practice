#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int inf = 4e18;

void solve(){
		
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i = 0;i<n;i++)cin >> a[i];
	
	string s;
	cin >> s;
		
			
	if(s[0] == '1' || s[n-1] == '1'){
		//cout << "IS ME" << endl;
		cout << "-1" << endl;
		return;
	}
	//s = ' ' + s;	

	int mn = inf;
	int p1,p2;
	int mx = 0;

	for(int i = 0;i<n;i++){
		if(s[i] == '1' && a[i] == 1){
			cout << "-1" << endl;
			return;
		}
		if(s[i] == '1' && a[i] == n){
			cout << "-1" << endl;
			return;
		}
		if(mn > a[i]){
			mn = a[i];
			p1 = i;
		}
		if(mx < a[i]){
			mx = a[i];
			p2 = i;
		}
	}
	
	
	p1++,p2++;

	cout << "5" << endl;
	cout << 1 << " " << p1 << endl;
	cout <<	1 << " " << p2 << endl; 
	cout << p1 <<" " << n << endl;
	cout << p2 << " " << n << endl;
	cout << min(p1,p2) << " " << max(p1,p2) << endl;


}

signed main(){

	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);

	int T = 1;
	cin >> T;
	while(T--)solve();
	return 0;
}
