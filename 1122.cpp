#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> S(N);
        for (int i = 0; i < N; i++) 
        {
            S[i] = i + 1;
        }

        vector<int> Q(M);
        for (int i = 0; i < M; i++) 
        {
            cin >> Q[i];
        }

        sort(Q.begin(), Q.end(), greater<int>());

        int maxCost = 0;
        int j = 0;
        for (int i = 0; i < M; i++) {
            int q = Q[i];
            while (j < N && S[j] % q != 0) {
                maxCost += S[j];
                j++;
            }

            if (j < N && S[j] % q == 0) {
                maxCost += S[j];
                S.erase(S.begin() + j);
                N--;
            }
        }

        cout << maxCost << endl;
    }

    return 0;
}
