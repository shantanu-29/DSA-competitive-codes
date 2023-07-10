#include<iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<string> vect(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> vect[i];
    }

    unordered_set<string> final;
    string check;

    for (int i = N - 1; i >= 0; i--) 
    {
        if (final.find(vect[i]) == final.end()) 
        {
            final.insert(vect[i]);
            check += vect[i].substr(vect[i].size() - 2);
        }
    }
    cout << check <<endl;
    


    return 0;
}



