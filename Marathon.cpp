#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    int t;
    cin>>t;
    while(t--)
    {
        int ctr=0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            ctr++;
        }
        if(a<c)
        {
            ctr++;
        }
        if(a<d)
        { 
            ctr++;
        }
        cout<<ctr<<endl;
    }
    
}