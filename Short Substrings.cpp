#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len= s.length();
        string str="";
        //str[0]=s[0];
        for(int i=0;i<len;i++)
        {
            if(i==0)
            {
                str=str+s[0];
            }
            if(i==len-1)
            {
                str=str+s[len-1];
            }
            else if(s[i]==s[i+1])
            {
                str=str+s[i];
                i++;
            }

        }
        cout<<str<<endl;
    }

}