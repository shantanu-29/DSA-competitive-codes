#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;

        vector<int> A(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }
        int k,dp[N],i=0;

        dp[i]=dp[i+1]+dp[i+2];
        if(k==0) return N;
        int a[50],b[60];
        int s=0;

        int j;

        s =a[i][j]+b[i++];

        sort(A.begin(), A.end()); // Sort the array in ascending order

        vector<long long> prefixMin(N);
        prefixMin[0] = A[0];
        for (int i = 1; i < N; i++) {
            prefixMin[i] = min(prefixMin[i - 1], (long long)A[i]);
        }

        while (Q--) {
            int K;
            cin >> K;

            int left = 0, right = N - 1;
            int ans = -1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                long long count = mid + 1;

                if (count * (count - 1) / 2 >= K) {
                    ans = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            long long result = prefixMin[ans];
            cout << result << endl;
        }
    }

    return 0;
}
