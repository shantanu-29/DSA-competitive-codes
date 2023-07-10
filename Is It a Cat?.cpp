#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int len;
        cin>>len;
        string str;
        cin>>str;
        int ctr=1;
        int a1=0,a2=0,a3=0;
        for(int i=0;i<len;i++)
        {

            
            if(str[i]!='m' && str[i]!='M' && str[i]!='E' && str[i]!='e' && str[i]!='o' && str[i]!='O' && str[i]!='W' && str[i]!='w')
            {
                ctr=-1;
                break;
            }
            else{
                if((str[i]=='m' || str[i]=='M') && (str[i+1]=='E' || str[i+1]=='e') )
                {
                    a1++;
                }
                if((str[i]=='e' || str[i]=='E') && (str[i+1]=='o' || str[i+1]=='O') )
                {
                    a2++;
                }
                if((str[i]=='o' || str[i]=='O') && (str[i+1]=='W' || str[i+1]=='w') )
                {
                    a3++;
                }
            }

        }
        if(a1>=1 && a2>=1 && a3>=1 && ctr==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    


}