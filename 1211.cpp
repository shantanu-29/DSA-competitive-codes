#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_queries;
    cin >> num_queries;

    for (int i = 0; i < num_queries; ++i) {
        int length;
        cin >> length;

        string s, t, u;
        cin >> s >> t >> u;

        int k = (t[0] - s[0] + 26) % 26;
        
        string result = "";
        for (char c : s) {
            if (isalpha(c)) {
                char base = islower(c) ? 'a' : 'A';
                char rotated_char = ((c - base + k) % 26) + base;
                result += rotated_char;
            } else {
                result += c;
            }
        }

        cout << result << =endl;
    }

    return 0;
}