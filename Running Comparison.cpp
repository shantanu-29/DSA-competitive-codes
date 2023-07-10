#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ctr=0;
        int a[n],b[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(int i=0;i<n;i++)
        {
            // if(a[i]<2*b[i] && b[i]<2*a[i])
            // {
            //     ctr++;
            // }
            if(a[i]>b[i])
            {
                if(a[i]<=2*b[i])
                {
                    ctr++;
                }
            }
            else if(b[i]>a[i])
            {
                if(b[i]<=2*a[i])
                {
                    ctr++;
                }
            }
            else
            {
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
}