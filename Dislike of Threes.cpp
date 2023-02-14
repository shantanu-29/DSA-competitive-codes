#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=1,m=1;
        cin>>n;
        
        while(m<k)
        {
            if((i%3)!==0 || (i/10!)==3)
            {
                m++;
            }
            if(m==k)
            {
                cout<<i<<endl;
            }
        }
    }
}