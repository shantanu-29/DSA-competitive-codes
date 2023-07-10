#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c;

        int m = max(a,b);
        n = min(a,b);
        int ctr=0;
        while(n<c)
        {
            n=n+m;
            ctr++;
        }
        cout<<ctr<<endl;
    }
}