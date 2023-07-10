#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        int ctr=0;
        vector<vector<int> > dp(N + 1, vector<int>(K + 1, 0));
        dp[0][0] = 1;


        for (int i = 1; i <= N; i++) {
            int vowels = 0;
            for (int j = 1; j <= K; j++) {
                if (S[i - 1] == 'a' || S[i - 1] == 'e' || S[i - 1] == 'i' || S[i - 1] == 'o' || S[i - 1] == 'u') {
                    vowels++;
                }
                dp[i][j] = dp[i - 1][j];
                if (vowels >= j) {
                    dp[i][j] = (dp[i][j] + dp[i - j][j]) % int(1e9 + 7);
                }
            }
        }





        cout << dp[N][K] % int(1e9 + 7) << endl;
    }

    return 0;
}
