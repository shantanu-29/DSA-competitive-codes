#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t,max=0;
    cin >> t;
    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;

        vector<pair<int, int> > vect;
        
        for (int i = 0; i < n; i++) {
            int m, lang;
            cin >> m >> lang;
            vect.push_back(make_pair(m, lang));
        }
        sort(vect.rbegin(), vect.rend());

        for (int i = 0; i < vect.size(); i++) {
            if (k > 0) {
                if (vect[i].second == l) {
                    max += vect[i].first;
                    k--;
                }
            }
        }
        if (max == 0 || k != 0)
            cout << -1 << endl;
        else
            cout << max << endl;
    }
    return 0;
}
