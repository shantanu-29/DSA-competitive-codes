#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int countGoodRemovals(vector<int>& arr) {
    int n = arr.size();
    vector<long long> dp(n + 1, 0);
    vector<int> prefixEven(n + 1, 0);
    vector<int> prefixOdd(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        if (arr[i - 1] % 2 == 0) {
            prefixEven[i] = prefixEven[i - 1] + 1;
            prefixOdd[i] = prefixOdd[i - 1];
        } else {
            prefixEven[i] = prefixEven[i - 1];
            prefixOdd[i] = prefixOdd[i - 1] + 1;
        }
    }

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        if (arr[i - 1] % 2 == 0) {
            dp[i] = (2 * dp[i - 1] - dp[prefixEven[i] - 1] + MOD) % MOD;
        } else {
            dp[i] = (dp[i - 1] + dp[prefixOdd[i] - 1]) % MOD;
        }
    }

    return dp[n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int answer = countGoodRemovals(arr);
        cout << answer << endl;
    }

    return 0;
}
