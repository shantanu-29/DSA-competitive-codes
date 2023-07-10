#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,n1,n2;
        cin>>m>>n;

        if(m>n)
        {
            n1=m;
            n2=n;
        }
        else
        {
            n1=n;
            n2=m;
        }
              
        if(n1>2*n2)
        {
            cout<<n1*n1<<endl;
        }
        else
        {
            int p=pow(2*n2, 2);
            cout<<p<<endl;
        }
        
    }
}