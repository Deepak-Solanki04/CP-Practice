#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=2e5+5,mod=998244353;
int T,n;
char s[N];

int solve(const string &s){
	int m=s.size();
	ll dp0=0, dp1=0;
	if(s[0]=='?' || s[0]=='0') dp0=1;
	if(s[0]=='?' || s[0]=='1') dp1=1;
	for(int i=1;i<m;i++){
		ll ndp0=0, ndp1=0;
		char c=s[i];
		if(c!='1') ndp0=dp1;
		if(c!='0') ndp1=dp0;
		dp0=ndp0;
		dp1=ndp1;
	}
	return (dp0+dp1)%mod;
}

int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		scanf("%s",s);
		string res1,res2;
		res1=res2="";
		for(int i=0;i<n;i++){
			if(i&1) res2=res2+s[i];
			else res1=res1+s[i];
		}
		ll ans=solve(res1)*solve(res2)%mod;
		printf("%lld\n",ans);
	}
	return 0;
}
