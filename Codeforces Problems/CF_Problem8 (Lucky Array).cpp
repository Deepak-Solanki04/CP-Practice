#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int mn = A[0];
    for(int i = 1; i < N; i++) {
        if(A[i] < mn) {
            mn = A[i];
        }
    }

    int freq = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] == mn) {
            freq++;
        }
    }

    if(freq % 2 == 1)
        cout << "Lucky";
    else
        cout << "Unlucky";

    return 0;
}
