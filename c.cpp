#include<iostream>
using namespace std;

    void solve()
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int a=0,b=0,c=0,d=0;
        int count=0;
        if(s[count]=='m' || s[count]=='M')
        
            while((s[count]=='M' || s[count]=='m') && count<n)
            {
                a=1;
                count++;
            }

        else
        {
            cout<<"No"<<endl;
            return ;
        }
        if(s[count]=='E' || s[count]=='e')
        
            while((s[count]=='E' || s[count]=='e') && count<n)
            {
                b=1;
                count++;
            }

        else
        {
            cout<<"No"<<endl;
            return ;
        }
        if(s[count]=='O' || s[count]=='o')
        
            while((s[count]=='O' || s[count]=='o') && count<n)
            {
                c=1;
                count++;
            }
        
        else
        {
            cout<<"No"<<endl;
            return ;
        }
        if(s[count]=='W' || s[count]=='w')
        
            while((s[count]=='W' || s[count]=='w') && count<n)
            {
                d=1;
                count++;
            }
        else
        {
            cout<<"No"<<endl;
            return ;
        }
        
        if(a==1 && b==1 && c==1 && d==1 && count==n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}