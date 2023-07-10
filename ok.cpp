#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       int sum=0;
       int c=0;
       for(int i=0; i<n; i++)
       {
            int k;
            cin>>k;
            if(k!=0)
                arr[i]=k;
            sum+=abs(k);
       }

       sort(arr,arr+n);

       if(n==1)
       {
            cout<<0<<endl;
       }
        else
        {
        int final=0;
        int i=0,j=n-1;
        while(i<j)
        {
            final+=arr[j]-arr[i];
            i++;
            j--;
        }
        cout<< final<<endl;
    }

    }
    
}
