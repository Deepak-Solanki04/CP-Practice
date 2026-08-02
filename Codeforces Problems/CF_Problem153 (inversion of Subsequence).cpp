#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin >> t;
    while(t-- > 0){
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for(int i=0; i<n; ++i){
            std::cin >> a[i];
        }
        int dc1 = 0;
        int dc0 = 0;
        bool has0 = false;
        bool has1 = false;
        for(int i=0; i<n; ++i){
            int bi;
            std::cin >> bi;
            if(a[i] != bi){
                if(a[i] == 0){
                    dc0++;
                }
                else{
                    dc1++;
                }
            }
            else if(a[i] == 0){
                has0 = true;
            }
            else{
                has1 = true;
            }
        }
        if(dc1 != 0 && dc1%2 == 0){
            std::cout << 2;
        }
        else if(dc1 != 0){
            std::cout << 1;
        }
        else if(dc0 == 0){
            std::cout << 0;
        }
        else if(dc0 != 0 && has0 && has1){
            std::cout << 2;
        }
        else{
            std::cout << -1;
        }
        std::cout << std::endl;
    }
    return 0;
}
