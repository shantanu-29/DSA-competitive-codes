#include<iostream>
using namespace std;

int main()
{
    int n,t,t1,sum=0,ctr=0,maxi=0;
    cin>>n>>t;
    t=t1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            sum=sum+a[i];
            if(sum<t1)
            {
                t1=t1-a[i];
                ctr++;
            }

        }
        if(ctr>maxi)
        {
            maxi=ctr;
        }
        ctr=0;
        sum=0;
    }

    cout<<maxi;
}