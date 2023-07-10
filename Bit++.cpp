#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int ctr=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s == "++X" || s== "X++")
        {   
            ctr++;
        }
        else if(s == "--X" || s== "X--")
        {
            ctr--;
        }
    }
    cout<<ctr;
}