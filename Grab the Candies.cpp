#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        int odd=0, even=0;

        for(int i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                even=even+arr[i];
            }
            else{
                odd=odd+arr[i];
            }
        }

        if(even>odd)
        {
            // int even1=0,odd1=0;
            // for(int i=1;i<a;i++)
            // {
            //     if(arr[i]%2==0)
            //     {
            //         even1=even1+arr[i];
            //     }
            //     else{
            //         odd1=odd1+arr[i];
            //     }
            // }
            // if(even1>odd1)
            // {
            //     cout<<"YES"<<endl;
            // }
            // else{
            //     cout<<"NO"<<endl;
            // }
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}