#include<iostream>
using namespace std;

int main()
{
    int n,m,ctr=0;
     
    cin>>n>>m;
    char a[n][m];
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
            {
                ctr++;
                break;
            }
        }
    }
    if(ctr==0)
    {
        cout<<"#Black&White";
    }
    else{
        cout<<"#Color";
    }

}