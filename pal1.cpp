#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    unordered_set<string> set;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;

        if (set.find(st) != set.end())
        {
            set.erase(st);
        }

        set.insert(st);
    }

    int num = set.size();
    string str[num];
    copy(set.begin(), set.end(), str);
    string final = "";

    for (int i = num - 1; i > -1; i--)
    {
        string s = str[i];
        string lastTwoLetters = s.substr(s.length() - 2);
        final = final + lastTwoLetters;
    }

    cout << final;

    return 0;
}
