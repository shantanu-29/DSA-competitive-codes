#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=1,m=0;
        cin>>n;
        
        while(m<n)
        {
            if((i%3)!=0 || (i/10)!=3)
            {
                m++;
            }
            if(m==n)
            {
                cout<<i<<endl;
            }
            i++;
        }
    }
}