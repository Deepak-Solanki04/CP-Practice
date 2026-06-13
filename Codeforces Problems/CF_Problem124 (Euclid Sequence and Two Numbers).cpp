#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i=0; i<n;i++){
            cin >> b[i];
        }
        sort(b.begin(),b.end(),greater<int>());
        int x=b[0],y = b[1];
        bool isOk = true;
        for(int i=2; i<n;i++){
            if(b[i]!= x%y){
                isOk = false;
                break;
            }
            x = y;
            y = b[i];
        }
        if(isOk) {
            cout << b[0] << " " << b[1] << endl;
        }
        else cout << "-1\n";
    }
    return 0;
}
