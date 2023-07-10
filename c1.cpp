#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int flag=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='M' || s[i]!='m' || s[i]!='E' || s[i]!='e' || s[i]!='o' || s[i]!='O' || s[i]!='W' || s[i]!='w')
            c=1;
            break;
        }
        if(c==1)
        {
            cout<<"No"<<endl;
        }
        if(c==0)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;j<n;j++)
                {
                    for(int l=k+1;k<n;k++)
                    {
                        if((s[i]=='M' || s[i]=='m') && (s[j]=='E' || s[j]=='e') && (s[k]=='O' || s[k]=='o' )&& (s[l]=='W' || s[l]=='w'))
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        
        }
       
        
        
    }
}