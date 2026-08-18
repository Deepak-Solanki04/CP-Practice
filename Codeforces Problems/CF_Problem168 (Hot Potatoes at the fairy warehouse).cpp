#include<bits/stdc++.h>
using namespace std;
void sol(){
	int n,k;
	cin>>n>>k;
	vector<char>a(2*n,0);
	vector<int>b(2*n,0);
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	for(int i=0;i<2*n-1;i++){
		if(a[i]=='1'&&a[i+1]!='1')b[i+1]=1;
		if(a[i]=='1'&&a[i+1]=='1')b[i]=1; 
	}
	if(a[2*n-1]=='1'&&a[0]=='0')b[0]=1;
	if(a[2*n-1]=='1'&&a[0]=='1')b[2*n-1]=1;
	int ans1=0,ans2=0;
	for(int i=0;i<2*n;i+=2){
		if(b[i]!=0)ans2++;
	}
	for(int i=1;i<2*n;i+=2){
		if(b[i]!=0)ans1++;
	}
	cout<<ans1<<" "<<ans2<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)sol();
	return 0;
}
