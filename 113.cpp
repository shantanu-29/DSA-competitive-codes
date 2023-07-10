#include <iostream>
using namespace std;

void calculateScores(int N, string S, int& aliceScore, int& bobScore) {
    aliceScore = 0;
    bobScore = 0;
    char server = 'A'; // Alice is the server in the beginning

    for (int i = 0; i < N; i++) {
        if (S[i] == server) {
            aliceScore++;
        } else {
            server = S[i];
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int aliceScore, bobScore;
        calculateScores(N, S, aliceScore, bobScore);

        cout << aliceScore << " " << bobScore << endl;
    }

    return 0;
}
