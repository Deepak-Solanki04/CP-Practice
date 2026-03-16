#include <bits/stdc++.h>
using namespace std;
 
bool palindrome(string &s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++; r--;
    }
    return true;
}
 
bool nonDecreasing(string &p){
    for(int i=1;i<p.size();i++)
        if(p[i] < p[i-1]) return false;
    return true;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        string s;
        cin >> n >> s;
 
        bool found=false;
 
        for(int mask=0; mask < (1<<n); mask++){
            string p="", x="";
            vector<int> idx;
 
            for(int i=0;i<n;i++){
                if(mask&(1<<i)){
                    p+=s[i];
                    idx.push_back(i+1);
                } else {
                    x+=s[i];
                }
            }
 
            if(nonDecreasing(p) && palindrome(x)){
                cout << idx.size() << "\n";
                for(int v:idx) cout << v << " ";
                cout << "\n";
                found=true;
                break;
            }
        }
 
        if(!found) cout << -1 << "\n";
    }
}
