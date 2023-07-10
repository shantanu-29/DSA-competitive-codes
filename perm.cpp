#include <iostream>
using namespace std;
const int MOD = 1000000007;

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}


unsigned long long nCk_factorial(int n, int k) {
    unsigned long long nCk = 1;
    for (int i = n; i > n - k; --i) {
        nCk *= i;
    }
    return nCk *factorial(n);
}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if (n > k) {
            unsigned long long result = nCk_factorial(n, k) %MOD;
            cout<<result <<endl;
        } 
        else {
            unsigned long long result = factorial(k);
            cout << result<<endl;
        }
    }


    return 0;
}

 