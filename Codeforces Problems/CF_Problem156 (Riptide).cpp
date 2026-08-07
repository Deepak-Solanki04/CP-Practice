#include <bits\stdc++.h>
#include<stack>
#include <queue>
using namespace std;
using ll =long long;
# define fast_io\
    ios_base:sync_with_stdio(false);\
    cin.tie(NULL);
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        ll round=0;
        cin>>a>>b>>c;
        while(true){
            if(a==b||a==c||b==c){
                break;
            }
            if(max({a,b,c})==a){a-=1;round+=1;}
            else if(max({a,b,c})==b){b-=1;round+=1;}
            else if(max({a,b,c})==c){c-=1;round+=1;}

            if(min({a,b,c})==a){a+=1;}
            else if(min({a,b,c})==b){b+=1;}
            else if(min({a,b,c})==c){c+=1;}
        }
        cout<<round<<'\n';
    }
    return 0;
}
