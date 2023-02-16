#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int j=0;
    string str="hello";
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(j==0 && s[i]=='h')
        {
            j++;
        }
        else if(j==1 && s[i]=='e')
        {
            j++;
        }
        else if(j==2 && s[i]=='l')
        {
            j++;
        }
        else if(j==3 && s[i]=='l')
        {
            j++;
        }
        else if(j==4 && s[i]=='o')
        {
            j++;
        }

    }
    if(j==5)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}