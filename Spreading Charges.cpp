#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
 
    while(t--)
    {

        int len;
        cin>>len;
        string str;
        cin>>str;
        string ar = str;
        string ar1 = str;
        int ctr=0;
        int i=0;


        for(int i=0;i<len;i++)
        {

            if(i==0)
            {
                
                ar[0]=ar[1];
                
            }
            if(i==len-1)
            {
                ar[len-1]=ar[len-2];
            }

            if(ar[i]=='0' && i!=0 && i!=len-1)
            {
                if(ar[i-1]!=ar[i+1])
                {
                    {
                        if(ar[i-1]=='0' && ar[i+1]=='+')
                        {
                            ar[i]='+';
                        }
                        else if(ar[i-1]=='0' && ar[i+1]=='-')
                        {
                            ar[i]='-';
                        }
                        else if(ar[i-1]=='+' && ar[i+1]=='0')
                        {
                            ar[i]='+';
                        }
                        else if(ar[i-1]=='-' && ar[i+1]=='0')
                        {
                            ar[i]='-';
                        }
                        else if(ar[i-1]=='+' && ar[i+1]=='-')
                        {
                            ar[i]='0';
                        }
                        else if(ar[i-1]=='-' && ar[i+1]=='+')
                        {
                            ar[i]='0';
                        }
                 
                    }
                }
                else if(ar[i-1]==ar[i+1])
                {
                    ar[i]=ar[i-1];
                }
            }
            
            if(i==len-1)
            {
                if(ar.compare(ar1))
                {
                    for(int i=0;i<len;i++)
                    {
                        if(ar[i]=='0')
                        {
                            ctr++;
                        }
                    }
                    cout<<ctr<<endl;
                    break;
                }
                else{
                    ar1=ar;
                    i=0;
                }
            }
             

        }    


    }
    
    


	return 0;
}
