#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<1;
    }
    else{
        int t=0;
        while(n<=m)
        {
            n=n*3;
            m=m*2;
            t++;
        }
        cout<<t;
    }
    




}