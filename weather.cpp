// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<pair<int, int> > a(n), b(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i].first;
//             a[i].second = i;
//         }

//         for (int i = 0; i < n; i++) {
//             cin >> b[i].first;
//             b[i].second = i;
//         }

//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());

//         vector<int> final(n);

//         for (int i = 0; i < n; i++) {
//             final[a[i].second] = b[i].first;
//         }

//         for (int i = 0; i < n; i++) {
//             cout << final[i] << " ";
//         }

//         cout << endl;

//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

void solveTestCase() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int> > a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a.begin(), a.end(), compare);
    sort(b.begin(), b.end(), compare);

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        ans[a[i].second] = b[i].first;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}
