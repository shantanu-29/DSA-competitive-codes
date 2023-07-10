#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Participant {
    int score;
    int penalty;
    int index;
};

bool compareParticipants(const Participant& p1, const Participant& p2) {
    if (p1.score == p2.score)
        return p1.penalty < p2.penalty;
    return p1.score > p2.score;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int> > times(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> times[i][j];
            }
        }

        vector<Participant> participants;
        for (int i = 0; i < n; i++) {
            Participant p;
            p.score = 0;
            p.penalty = 0;
            p.index = i + 1;
            participants.push_back(p);
        }

        for (int i = 0; i < n; i++) {
            vector<int> order(m);
            for (int j = 0; j < m; j++) {
                order[j] = j;
            }

            do {
                int currentPenalty = 0;
                int solved = 0;
                for (int j = 0; j < m; j++) {
                    if (currentPenalty + times[i][order[j]] <= h) {
                        currentPenalty += times[i][order[j]];
                        solved++;
                    }
                }

                if (solved > participants[i].score) {
                    participants[i].score = solved;
                    participants[i].penalty = currentPenalty;
                }
            } while (next_permutation(order.begin(), order.end()));
        }

        sort(participants.begin(), participants.end(), compareParticipants);

        for (int i = 0; i < n; i++) {
            if (participants[i].index == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
