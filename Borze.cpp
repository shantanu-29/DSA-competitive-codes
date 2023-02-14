#include<iostream>
using namespace std;

int main()
{
    int n,m,ctr=0;
    string str,st="";
    getline(cin,str);

    for(int i=0;i<str.length(); i++)
    {
        if(str[i]=='.')
        {
            st= st+"0";
        }
        else if (str[i]=='-' && str[i+1]=='.')
        {
            st=st+"1";
            i++;

        }
        else if (str[i]=='-' && str[i+1]=='-')
        {
            st=st+"2";
            i++;
        }
        
    }

    cout<<st;
}