#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        set<string> mel;
        for (int i = 0; i < str.length() - 1; i++) {
            string m = "";
            m += str[i];
            m += str[i + 1];
            mel.insert(m);
        }
        cout<<mel.size()<<endl;

    }

}