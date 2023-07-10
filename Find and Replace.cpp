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
        string s;
        cin>>s;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                arr[i]=1;
            }
            else
            {
                arr[i]=0;
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j] && arr[i]!=arr[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}