#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, K, L;
        cin >> N >> K >> L;

        vector<int> lengths(N);
        vector<int> languages(N);

        for (int i = 0; i < N; i++) {
            cin >> lengths[i] >> languages[i];
        }

        int max_length = -1;

        for (int i = 0; i < N; i++) {
            if (languages[i] == L) {
                int current_length = lengths[i];
                int count = 1;

                for (int j = 0; j < N; j++) {
                    if (languages[j] == L && count < K) {
                        current_length += lengths[j];
                        count++;
                    }
                }

                if (current_length > max_length) {
                    max_length = current_length;
                }
            }
        }

        if (max_length == -1) {
            cout << -1 << endl;
        } else {
            cout << max_length << endl;
        }
    }

    return 0;
}
