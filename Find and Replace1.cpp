#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        //int arr[n];
        int ctr=1;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
            {
                ctr++;
                continue;
            }
            else
            {
                ctr=0;
                cout<<"N0"<<endl;
                break;
            }
        }
        char a1[n];
        if(ctr>1)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    a1[i]='1';
                }
                else{
                    a1[i]='0';
                }
            }
            int ctr1=1;

            for(int i=0; i<n;i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(arr[i]==arr[j] && a1[i]==a1[j])
                    {
                        continue;
                    }
                    else{
                        //cout<<"NO"<<endl;
                        ctr1=0;
                        break;
                    }
                }
                if(ctr1==1)
                {
                    cout<<"YES"<<endl;;
                }
                else if(ctr1==0)
                {
                    cout<<"NO"<<endl;
                }
            }

        }

    }
}