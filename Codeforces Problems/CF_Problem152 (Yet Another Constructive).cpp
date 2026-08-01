#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i) {
        int n, k, m;
        std::cin >> n >> k >> m;
        if(k > m) {
            std::cout << "NO\n";
            continue;
        }
        std::cout << "YES\n";
        int d = m/k, p = m % k;
        for(int j = 0; j < k-p; ++j) std::cout << d << ' ';
        ++d;
        for(int j = 0; j < p; ++j) std::cout << d << ' ';
        for(int j = k; j < n; ++j) std::cout << "1 ";
        std::cout << '\n';
    }
}
